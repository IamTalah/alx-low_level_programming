#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year,
* taking leap years into account
*
* Return: 0
*/

int main(void)
{
int month;
int day;
int year;

month = 4;
day = 10;
year = 2017;

printf("Date: %02d/%02d/%04d\n", month, day, year);

print_remaining_days(month, day, year);

month = 2;
day = 29;
year = 2020;

printf("Date: %02d/%02d/%04d\n", month, day, year);

print_remaining_days(month, day, year);

return (0);
}

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
{
if (month > 2)
{
day++;
}
printf("Day of the year: %d\n", day + ((month - 1) * 31) - ((month - 1) / 2) - ((month > 2) ? ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? 1 : 2) : 0));
printf("Remaining days: %d\n", 366 - (day + ((month - 1) * 31) - ((month - 1) / 2) - ((month > 2) ? ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? 1 : 2) : 0)));
}
else
{
if (month == 2 && day == 29)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
}
else
{
printf("Day of the year: %d\n", day + ((month - 1) * 31) - ((month - 1) / 2));
printf("Remaining days: %d\n", 365 - (day + ((month - 1) * 31) - ((month - 1) / 2)));
}
}
}

