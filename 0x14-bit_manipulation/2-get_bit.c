#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - finds the value
 * of a bit at a given index
 *
 * @n: the number in decimal
 * @index: the index to search for
 *
 * Return: the value of the searched bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check;
	unsigned long int bit = sizeof(n) * 8 - 1;
	unsigned long int mask;

	if (index > bit)
		return (-1);

	mask = 1 << index;
	check = n & mask;

	if (check == mask)
		return (1);

	return (0);
}
