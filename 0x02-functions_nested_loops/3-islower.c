#include "main.h"
/**
 * _islower - Entry point
 * @c: character to test.
 * Description: 'Write a function that checks for lowercase character.'
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
