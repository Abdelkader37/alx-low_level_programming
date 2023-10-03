#include <stdio.h>
#include <stdlib.h>
/**
*main - start point
*Discription: prent alph expect e and q
*return :always returne to 0
**/

int main(void)
{
	char n = 'a';
	while (n <= 'z' && n != 'q' && n != 'e')
	{
	putchar (n);
	n++;
	}
	putchar ('\n');

	return (0);
}
