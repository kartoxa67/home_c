#include <stdio.h>
#include <stdint.h>
#include "temp_api.h"
#define SIZE 30


int main(void)
{
    Readings info[SIZE];
    int number = add_info(info);
    print(info, number);
    printf("average month temperature = %d\n", average_monthly_temp(info,2021, 1, 5));
    printf("min = %d\n", min_temp_in_current_month(info, 2021,1,5));
    printf("max = %d\n", max_temp_in_current_month(info, 2021,1,5));
    statistics(info, 2021,5);
    return 0;
}
