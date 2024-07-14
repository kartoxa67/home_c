#include "temp_api.h"

void add_record(Readings info[],
                int number,
                uint16_t year,
                uint8_t month,
                uint8_t day,
                uint8_t hours,
                uint8_t minutes,
                int8_t temperature)
{
    info[number].year = year;
    info[number].month = month;
    info[number].day = day;
    info[number].hours = hours;
    info[number].minutes = minutes;
    info[number].temperature = temperature;
}

int del_record(Readings info[], int del_index, int number)
{
    for (int i = del_index; i < number; i++)
        info[i] = info[i + 1];
    int counter = number - 1;
    return counter;
}

int add_info(Readings info[])
{
    int counter = 0;
    add_record(info, counter++, 2021, 1, 16, 1, 1, -47);
    add_record(info, counter++, 2021, 2, 12, 1, 3, -44);
    add_record(info, counter++, 2023, 2, 12, 1, 3, -44);
    add_record(info, counter++, 2021, 2, 16, 1, 4, -43);
    add_record(info, counter++, 2021, 2, 11, 1, 4, -50);
    add_record(info, counter++, 2021, 2, 17, 1, 1, -30);
    return counter;
}

void print(Readings info[], int number)
{
    printf("===========================\n");
    for (int i = 0; i < number; i++)
    {
        printf("%04d-%02d-%02d %02d:%02d t=%3d\n",
               info[i].year,
               info[i].month,
               info[i].day,
               info[i].hours,
               info[i].minutes,
               info[i].temperature);
    }
    printf("===========================\n");
}

void change_ij(Readings info[], int i, int j)
{
    Readings temp;
    temp = info[i];
    info[i] = info[j];
    info[j] = temp;
}

void sort_by_temp(Readings info[], int number)
{
    for (int i = 0; i < number; i++)
    {
        for (int j = i; j < number; j++)
        {
            if (info[i].temperature >= info[j].temperature)
                change_ij(info, i, j);
        }
    }
}

int compare(Readings *a, Readings *b)
{
    if (a->year != b->year)
        return a->year - b->year;
    else if (a->month != b->month)
        return a->month - b->month;
    else if (a->day != b->day)
        return a->day - b->day;
    else if (a->hours != b->hours)
        return a->hours - b->hours;
    else if (a->minutes != b->minutes)
        return a->minutes - b->minutes;
    else
        return 0;
}

void sort_by_day(Readings info[], int number)
{
    for (int i = 0; i < number; i++)
    {
        for (int j = i; j < number; j++)
        {
            if(compare(info+i,info+j)>0)
                change_ij(info, i, j);
        }
    }
}

int average_monthly_temp(Readings info[], uint16_t year, uint8_t month, int number)
{
    int sum = 0, counter = 0;
    for (int i = 0; i < number; i++)
    {
        if ((info[i].year == year) && (info[i].month == month))
        {
            sum += info[i].temperature;
            counter++;
        }
    }

    return (sum / counter);
}

int min_temp_in_current_month(Readings info[], uint16_t year, uint8_t month, int number)
{
    int min, flag = 0;
    for (int i = 0; i < number; i++)
    {
        if ((info[i].year == year) && (info[i].month == month) && (!flag))
        {
            min = info[i].temperature;
            flag = 1;
        }
        if ((info[i].year == year) && (info[i].month == month) && (flag))
        {
            if (info[i].temperature < min)
                min = info[i].temperature;
        }
    }
    return min;
}

int max_temp_in_current_month(Readings info[], uint16_t year, uint8_t month, int number)
{
    int max, flag = 0;
    for (int i = 0; i < number; i++)
    {
        if ((info[i].year == year) && (info[i].month == month) && (!flag))
        {
            max = info[i].temperature;
            flag = 1;
        }
        if ((info[i].year == year) && (info[i].month == month) && (flag))
        {
            if (info[i].temperature > max)
                max = info[i].temperature;
        }
    }
    return max;
}

void statistics(Readings info[], int year, int number)
{
    int sum = 0, counter = 0, flag_min = 0, flag_max = 0;
    int min_temp, max_temp;
    for (int i = 0; i < number; i++)
    {
        if (info[i].year == year)
        {
            sum += info[i].temperature;
            counter++;
        }
    }
    printf("average annual temperature = %d\n", sum / counter);
    for (int i = 0; i < number; i++)
    {
        if ((info[i].year == year) && (!flag_min) && (!flag_max))
        {
            min_temp = info[i].temperature;
            max_temp = info[i].temperature;
            flag_min = 1;
            flag_max = 1;
        }
        if ((info[i].year == year) && (flag_min) && (flag_max))
        {
            if (info[i].temperature < min_temp)
                min_temp = info[i].temperature;
            if (info[i].temperature > max_temp)
                max_temp = info[i].temperature;
        }
    }
    printf("min temperature = %d\n", min_temp);
    printf("max temperature = %d\n", max_temp);
}
