#include "main.h"

/**
 * binary_to_uint - Program that converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 * Return: the converted number, or
 * 0 if there is one or more chars in the string
 * b that is not 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int l = 0;

	if (b[l] == '\0')
		return (0);

	while ((b[l] == '0') || (b[l] == '1'))
	{
		n <<= 1;
		n += b[l] - '0';
		l++;
	}

	return (n);
}

