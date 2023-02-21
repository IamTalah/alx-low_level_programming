#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - function that prints the last digit of a number
 * @i: Variable in the argument
 * Return: 0
 *
 */
int print_last_digit(int i)
{
	int n;

	n = (i % 10);

	if (n < 0)
		n = (-1 * n);
	_putchar(n + '0');
	return (n);
}

