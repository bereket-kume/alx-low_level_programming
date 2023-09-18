#include "main.h"
#include <string.h>
/**
 *rev_string - is the function that reverse string
 *@s: parameter of our function
 *Return: nothing
 */
void rev_string(char *s)
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
