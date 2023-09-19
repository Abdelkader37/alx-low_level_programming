#include "main.h"

/**
 *_puts - prints a string
 *@str : pointer to the string
 *
*/
void _puts(char *str)
{
int i = 0;
while (*(str + i) != '\0')
	i++;
write(1, str, i);
_putchar('\n');
}
