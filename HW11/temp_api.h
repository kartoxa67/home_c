#include <stdio.h>
#include <stdint.h>

typedef struct sensor
{
    uint16_t year;
    uint8_t month;
    uint8_t day;

    uint8_t hours;
    uint8_t minutes;
    int8_t temperature;
} Readings;

void add_record(Readings info[],
                int number,
                uint16_t year,
                uint8_t month,
                uint8_t day,
                uint8_t hours,
                uint8_t minutes,
                int8_t temperature);

int add_info(Readings info[]);

void print(Readings info[], int number);

void change_ij(Readings info[], int i, int j);

int average_monthly_temp(Readings info[], uint16_t year, uint8_t month, int number);

int min_temp_in_current_month(Readings info[], uint16_t year, uint8_t month, int number);

int max_temp_in_current_month(Readings info[], uint16_t year, uint8_t month, int number);

void statistics(Readings info[], int year, int numbers);