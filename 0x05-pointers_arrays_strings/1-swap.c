#include "main.h"

/**
 * swap_int- swaps betwenn 2 integers
 *@a : first pointer
 *@b : second pointer
 */
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
