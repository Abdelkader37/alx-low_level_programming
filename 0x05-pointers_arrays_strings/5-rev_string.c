#include "main.h"

/**
 *rev_string - function that reverse a string
 *@s : a poiunter to a string
 *
*/
void rev_string(char *s)
{
int i, j;
char temp;

i = 0;
while (s[i] != '\0')
	i++;
i--;

for (j = 0; j < i; j++, i--)
	{
	temp = s[j];
	s[j] = s[i];
	s[i] = temp;
	}
}
