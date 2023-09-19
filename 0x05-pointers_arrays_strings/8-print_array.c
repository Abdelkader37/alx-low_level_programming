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
_putchar('0' + a[i]);
if (i < n - 1)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
