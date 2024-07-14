#include <stdio.h>
#include <stdint.h>
#include "temp_api.h"
#define SIZE 30

int main(int argc, char *argv[])
{
    Readings info[SIZE];
    int number = add_info(info);
    int month = 0;
    char name[100];
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
                printf("Use -m **(month number) to get monthly temperature statistics\n");
                printf("==========================================================================\n");
                break;
            case 'm':
                sscanf(argv[i+1],"%d",&month);
                sort_by_day(info,number);
                uint16_t year = 0;
                for (int i = 0; i < number; i++)
                {
                    if ((info[i].month == month) &&(info[i].year != year))
                    {
                        printf("average month temperature in %d year = %d\n",info[i].year, average_monthly_temp(info, info[i].year, month, number) );
                        printf("min temp in %d year = %d\n", info[i].year, min_temp_in_current_month(info, info[i].year, month, number));
                        printf("max temp in %d year = %d\n",info[i].year, max_temp_in_current_month(info, info[i].year, month, number));
                        year = info[i].year;
                    }
                }
                if(year == 0)
                    printf("No information was found for this month\n");

                break;
            case 'f':
                sscanf(argv[i + 1], "%s", &name);
                // printf("%s\n", name);
                break;
            default:
                break;
            }
        }
    }

    // print(info, number);
    // statistics(info, 2021,number);
    // number = del_record(info, 2, number);
    // print(info, number);
    // sort_by_temp(info, number);
    // print(info, number);
    // sort_by_day(info,number);
    // print(info, number);
    return 0;
}
