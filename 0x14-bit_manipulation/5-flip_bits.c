#include "main.h"

/**
 * flip_bits - The program returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: Represents the number.
 * @m: Represents the number to flip n to.
 * Return: number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, b = 0;

	while (x > 0)
	{
		b += (x & 1);
		x >>= 1;
	}

	return (b);
}

