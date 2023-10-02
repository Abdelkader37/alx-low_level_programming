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
	char n = 'a';

	while (n <= 'z')
		{
		putchar (n);
		n++;
		}
	char n = 'A';

	while (n <= 'Z')
	  {
	    putchar (n);
	    n++;
	  }
	putchar ('\n');
	return (0);
}

