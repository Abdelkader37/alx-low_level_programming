#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - sets the value
 * of a bit at a given index to 1
 *
 * @n: the number in decimal
 * @index: the index to search for
 *
 * Return: 1 if succeded, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = sizeof(n) * 8 - 1;
	unsigned long int mask;

	if (index > bit)
		return (-1);

	mask = 1 << index;
	*n = *n | mask;

	return (1);
}
