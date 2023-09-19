#include "main.h"
#include <unistd.h>
/**
 *_puts - prints a string
 *@str : pointer to the string
 *
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
