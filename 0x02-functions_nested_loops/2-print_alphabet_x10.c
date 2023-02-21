#include "main.h"

/**
 * print_alphabet_x10 - Opening point
 * Description - prints the alphabet 10 times,
 * in lowercase, followed by a new line.
 * Return: Nothing
 **/
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}

