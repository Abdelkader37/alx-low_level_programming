#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - counts the the number
 * of bits we would need to flip to
 * get from a number to another
 *
 * @n: first number in decimal
 * @m: second number in decimal
 *
 * Return: the number of bit flips needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor != 0)
	{
		if (xor & 1)
			count++;
		xor >>= 1;
	}

	return (count);
}
