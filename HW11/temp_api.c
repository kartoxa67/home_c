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

int add_info(Readings info[])
{
    int counter = 0;
    add_record(info, counter++, 2021, 1, 16, 1, 1, -47);
    add_record(info, counter++, 2021, 1, 16, 1, 3, -44);
    add_record(info, counter++, 2021, 1, 16, 1, 4, -43);
    add_record(info, counter++, 2021, 1, 16, 1, 4, -50);
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
