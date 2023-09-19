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
        /* Handle negative numbers */
        if (a[i] < 0)
        {
            _putchar('-');
            a[i] = -a[i];  // Make the number positive for printing
        }

        /* Print the current element as digits */
        if (a[i] == 0)
        {
            _putchar('0');  // Special case for 0
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

/**
 * power - calculates the power of a number
 * @base: The base
 * @exp: The exponent
 *
 * Return: The result of base raised to the power of exp
 */
int power(int base, int exp)
{
    int result = 1;
    while (exp > 0)
    {
        result *= base;
        exp--;
    }
    return result;
}
