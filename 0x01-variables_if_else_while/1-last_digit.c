#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - starting point.
 *Discription: print print the last digit of the 
 *number stored in the variable n
 *
 *Return: return to 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n%10 > 5)
		printf("the last digit of %d is greater than 5\n", n);
	else if (n%10 == 0)
		printf("the last digit of %d is 0\n", n);
	else
		printf("the last digit of %d is less than 6 and not 0\n", n);
	return (0);
}
