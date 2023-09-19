#include <unistd.h>
#include "main.h"

/**
 * print_array - prints n elements of an integer array
 * @a: The array to be printed
 * @n: The number of elements to print
 */
void print_array(int *a, int n)
{
int c;
int t[799];
c = 1;

while (*a != '\0')
{
t[c] = *a;
c++;
a++;
}
a--;
c = 1;

while (c <= n)
{
if (i != n)
printf("%d, ", t[c]);
else
printf("%d", t[c]);

c++;
}

printf("\n");
}
