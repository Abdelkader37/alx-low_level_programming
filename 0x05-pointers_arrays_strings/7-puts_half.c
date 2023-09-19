#include "main.h"

/**
 * puts_half - Prits half of the string
 * @str: The input string.
 */
void puts_half(char *str)
{
int moha, i, j;
moha = 0;

while (str[moha] != '\0')
	moha++;

if ((moha % 2) == 0)
{
for (i = (moha / 2); i < moha; i++)
	_putchar(str[i]);
}
else if ((moha % 2) != 0)
{
for (j = ((moha + 1) / 2); j < moha; j++)
	_putchar(str[j]);
}

_putchar('\n');
}
