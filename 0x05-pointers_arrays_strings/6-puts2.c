#include "main.h"

/**
 * puts2 - Prints every other character of
 * @str: The input string.
 */
void puts2(char *str)
{

int moha, i;

moha = 0;

while (str[moha] != '\0')
	moha++;

for (i = 0 ; i < moha ; i += 2)
{
	_putchar(str[i]);
}


_putchar('\n');
}
