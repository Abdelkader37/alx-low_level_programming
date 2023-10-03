#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main -start point
 *
 * Description: single-digit numbers in base 10 start from 0 and go up to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n = 0;
        char m = 'a';

        while (n <=10)
        {
        putchar(48 + n);
        n++;
        }
         while (m < 'g')
        {
        putchar(m);
        m++;
        }
        putchar('\n');
        return (0);
}

