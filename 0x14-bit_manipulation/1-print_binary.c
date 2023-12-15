#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints the binary
 * representation of a number
 *
 * @n: the number in decimal
 */
void print_binary(unsigned long int n)
{
	long int i = (sizeof(n) * 8 - 1);
	unsigned long int bit = (n >> i) & 1;

	while (i >= 0 && bit == 0)
	{
		i--;
		bit = (n >> i) & 1;
	}

	_putchar('0' + bit);
	i--;

	while (i >= 0)
	{
		bit = (n >> i) & 1;
		_putchar('0' + bit);
		i--;
	}
}
