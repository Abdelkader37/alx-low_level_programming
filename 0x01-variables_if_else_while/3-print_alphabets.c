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
	char m = 'A';

	while (m <= 'Z')
	  {
	    putchar (m);
	    m++;
	  }
	putchar ('\n');
	return (0);
}
