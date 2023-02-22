#include <stdio.h>
#include "main.h"

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
	int leap_year = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));

	if (month < 1 || month > 12 || day < 1 || day > 31)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return ();
	}

	if (month == 2 && day == 29 && !leap_year)
	{
		printf("Invalid date: %02d/29/%04d (not a leap year)\n", month, year);
		return ();
	}

	int days_in_month[] = {31, leap_year ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int i, days_left = 0;

	for (i = month - 1; i < 12; i++)
	{
		days_left += days_in_month[i];
	}

	days_left -= day - 1;

	printf("Day of the year: %d\n", day_of_year(month, day, leap_year));
	printf("Remaining days: %d\n", days_left);
}

/**
* day_of_year - computes the day of the year for a given date
* @month: month in number format
* @day: day of month
* @leap_year: 1 if the year is a leap year, 0 otherwise
* Return: day of year
*/

int day_of_year(int month, int day, int leap_year)
{
	int days_in_month[] = {0, 31, leap_year ? 60 : 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

	return (days_in_month[month - 1] + day);
}

