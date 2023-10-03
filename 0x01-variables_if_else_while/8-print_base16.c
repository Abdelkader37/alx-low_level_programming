#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main -start point
 *
 * Description: single-digit numbers in base 16 start from 0 and go up to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n < 16)
	{
	putchar(48 + n);
	n++;
	}

	putchar('\n');

	return (0);
}
