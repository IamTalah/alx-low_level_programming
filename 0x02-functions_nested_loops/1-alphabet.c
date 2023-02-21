#include "main.h"
/**
 * print_alphabet - Opening point
 * Description - prints the alphabet, in lowercase, followed by a new line.
 * Return: Nothing
 **/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}
