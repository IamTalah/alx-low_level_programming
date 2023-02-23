#include "main.h"
/**
* print_line - draws a straight line in the terminal
* @n: variable in the function
* Return: 0
*/
void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
