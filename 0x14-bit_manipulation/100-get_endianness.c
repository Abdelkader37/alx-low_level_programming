#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if it's a big endian, 1 otherwise
 */
int get_endianness(void)
{
	int n;
	char *str;

	n = 1;
	str = (char *)&n;

	return (*str);
}
