#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main -start point
 *
 * Description: USE PUTCHAR TO PRINT ALPHABETS REVERSED 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
	putchar(n);
	n--;
	}
	putchar('\n');

	return (0);
}
