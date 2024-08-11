#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include "temp_functions.h"
#define SIZE 30000000
#define DEFAULT_YEAR 2021
#define N 6 // number of read parameters from the csv file

int main(int argc, char *argv[])
{
    char name[30] = {0};
    stack *p = NULL; // the list is empty
    int year, month, day, hours, minutes, temp, desired_month = 0;
    int r;
    char ch = 0;
    int counter = 0, line = 0;
    Readings records = {0};
    /*WITHOUT GETOPS*/
    for (int i = 0; i < argc; i++)
    {
        // printf("i = %d, argv = %s\n", i, argv[i]);
        char *str = argv[i];
        if (str[0] = '-')
        {
            switch (str[1])
            {
            case 'h':
                printf("==========================================================================\n");
                printf("This application displays annual and monthly temperature statistics, \nsorts by date and temperature\n\n");
                printf("Use -f <filename.csv> for processing\n");
                printf("Use -m <month number> to get monthly temperature statistics\n");
                printf("==========================================================================\n");
                break;
            case 'm':
                sscanf(argv[i + 1], "%d", &desired_month);
                break;
            case 'f':
                sscanf(argv[i + 1], "%s", &name);
                break;
            default:
                break;
            }
        }
    }
    FILE *open;
    if (name[0] != 0)
    {
        open = fopen(name, "r");
        if (open == NULL)
        {
            printf("%s\n", name);
            printf("The file cannot be opened!\n");
            return 1;
        }

        while ((r = fscanf(open, "%d;%d;%d;%d;%d;%d", &year, &month, &day, &hours, &minutes, &temp)) > 0)
        {
            if (r < N)
            {
                printf("line %d incorrect data:", ++line);
                do
                {
                    putchar(ch);
                    ch = fgetc(open);
                } while (EOF != ch && '\n' != ch);
                ch = 0;
                printf("\n");
            }
            else
            {
                push(&p, write_struct(records, year, month, day, hours, minutes, temp));
                counter++;
                line++;
            }
        }

        Readings *info = malloc(counter * sizeof(Readings)); // allocate the memory for processing data
        if (!info)
        {
            printf("Error\n");
            return -1;
        }
        for (int i = 0; i < counter; i++)
        {
            info[i] = pop(&p);
        }

        /*PROCESSING DATA*/;
        int avr_month_tem, min_month, max_month;
        avr_month_tem = average_monthly_temp(info, DEFAULT_YEAR, desired_month, counter);
        min_month = min_temp_in_current_month(info, DEFAULT_YEAR, desired_month, counter);
        max_month = max_temp_in_current_month(info, DEFAULT_YEAR, desired_month, counter);

        if (desired_month != 0)
        {

            if (avr_month_tem != -273)
            {
                int i = 0;
                printf("--------------------------------------------------------\n");
                printf("|#\tyear\tmonth\t average temp\t min\t   max |\n");
                printf("|------------------------------------------------------|\n");
                printf("|%d\t%d\t%d\t%8d\t%4d\t%7d|\n", ++i, DEFAULT_YEAR, desired_month, avr_month_tem, min_month, max_month);
                printf("--------------------------------------------------------\n");
            }
            else
                printf("Data for the %d month has not been found\n", desired_month);
        }
        else
        {
            printf("--------------------------------------------------------\n");
            printf("|#\tyear\tmonth\t average temp\t min\t   max |\n");
            printf("--------------------------------------------------------\n");
            for (int i = 1; i <= 12; ++i)
            {
                avr_month_tem = average_monthly_temp(info, DEFAULT_YEAR, i, counter);
                min_month = min_temp_in_current_month(info, DEFAULT_YEAR, i, counter);
                max_month = max_temp_in_current_month(info, DEFAULT_YEAR, i, counter);
                if (avr_month_tem != -273)
                {
                    printf("|%d\t%d\t%d\t%8d\t%4d\t%7d|\n", i, DEFAULT_YEAR, i, avr_month_tem, min_month, max_month);
                    printf("--------------------------------------------------------\n");
                }
            }
            statistics(info, DEFAULT_YEAR, counter);
        }

        fclose(open);
        free(info);
    }
    else if (argc == 1)
    {
        printf("==========================================================================\n");
        printf("This application displays annual and monthly temperature statistics, \nsorts by date and temperature\n\n");
        printf("Use -h to get more information\n");
        printf("==========================================================================\n");
    }

    return 0;
}
