#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct sensor
{
    uint16_t year;
    uint8_t month;
    uint8_t day;

    uint8_t hours;
    uint8_t minutes;
    int8_t temperature;
} Readings;

typedef struct list
{
    Readings info;
    struct list *next;
} stack;

Readings write_struct(Readings write,
                  uint16_t year,
                  uint8_t month,
                  uint8_t day,
                  uint8_t hours,
                  uint8_t minutes,
                  int8_t temperature);

void add_record(Readings info[],
                int number,
                uint16_t year,
                uint8_t month,
                uint8_t day,
                uint8_t hours,
                uint8_t minutes,
                int8_t temperature);

int del_record(Readings info[], int del_index, int number);

int add_info(Readings info[]);

void print(Readings info[], int number);

void change_ij(Readings info[], int i, int j);

void sort_by_temp(Readings info[], int number);

int compare(Readings *a, Readings *b);

void sort_by_day(Readings info[], int number);

int average_monthly_temp(Readings info[], uint16_t year, uint8_t month, int number);

int min_temp_in_current_month(Readings info[], uint16_t year, uint8_t month, int number);

int max_temp_in_current_month(Readings info[], uint16_t year, uint8_t month, int number);

void statistics(Readings info[], int year, int numbers);

void push(stack **p, Readings info);

_Bool empty_stack(stack *p);

Readings pop(stack **p);