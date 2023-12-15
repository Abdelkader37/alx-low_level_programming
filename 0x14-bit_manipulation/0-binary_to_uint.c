#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to
 * an unsigned int
 *
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, number = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	i = 0;
	while (b[i] != '\0')
	{
		number <<= 1;

		if (b[i] == '1')
			number += 1;
	i++;
	}

	return (number);
}
