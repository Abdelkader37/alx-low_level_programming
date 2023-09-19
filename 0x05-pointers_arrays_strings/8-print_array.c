#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

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
        /* Print the current element */
        _putchar('0' + a[i]);

        /* If it's not the last element, print a comma and a space */
        if (i < n - 1)
        {
            _putchar(',');
            _putchar(' ');
        }
    }

    /* Print a new line at the end */
    _putchar('\n');
}
