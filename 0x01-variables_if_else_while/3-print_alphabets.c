#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 *main - starting point
 *Description: print alphabet
 *
 *Return: Returns 0 always.
 */

int main(void)
{
	char n = 'z';

	while (n <= 'z' && n >= 'a')
		{
		putchar (n);
		n--;
		}
		putchar ('\n');
	return (0);
}

