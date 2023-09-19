#include "main.h"

/**
 * _strlen- output length of a string
 *@s : pointer to string
 *Return: length of string
 */
int _strlen(char *s)
{
int n = 0;
while (*(s + n) != '\0')
	n++;
return (n);
}
