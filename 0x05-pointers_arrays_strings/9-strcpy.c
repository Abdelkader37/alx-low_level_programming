#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _strcpy - the function
 *
 * decription: copies the string to the buffer
 *
 * @dest: the buffer
 *
 * @src: the string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (dest_start);
}
