#include "main.h"
#include <string.h>
/**
 *print_rev - is function that reverse our function
 *@s: is parameter of our function
 *Return: nothing
 */
void print_rev(char *s)
{
	int arrlen = strlen(s);
	int i, j;
	char stemp;

	j = arrlen - 1;
	for (i = 0; i < j; i++, j--)
	{
		stemp = s[i];
		s[i] = s[j];
		s[j] = stemp;
	}
}
