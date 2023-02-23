#include "main.h"
/**
 *print_numbers - prints 0 - 9.
 *
 *Return: void.
 */
void print_numbers(void)
{
	int i;
	
	char digits[] = "0123456789\n";
	for (i = 0; i < 11; i++)
	{
		_putchar(digits[i]);
	}
}

