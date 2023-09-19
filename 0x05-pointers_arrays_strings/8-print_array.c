#include <unistd.h>
#include "main.h"

/**
 * print_array - prints n elements of an integer array
 * @a: The array to be printed
 * @n: The number of elements to print
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (a[i] < 0)
{
_putchar('-');
a[i] = -a[i]; 
}
if (a[i] == 0)
{
_putchar('0');  
}
else
{
int num = a[i];
int num_digits = 0;
while (num > 0)
{
num /= 10;
num_digits++;
}
num = a[i];
while (num_digits > 0)
{
int digit = num / power(10, num_digits - 1);
_putchar('0' + digit);
num %= power(10, num_digits - 1);
num_digits--;
}
}
if (i < n - 1)
{
_putchar(',');
_putchar(' ');
}
}
 _putchar('\n');
}
