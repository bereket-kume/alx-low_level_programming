#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts2 - is function that prints number
 *@str: is parameter that given to our function
 *Retrun: nothing
 */
void puts2(char *str)
{
	int arrlen = strlen(str);
	int i, j;
	char stemp;

	j = arrlen - 1;
	for (i = 0; i < j; i++, j--)
	{
		stemp = str[i];
		str[i] = str[j];
		str[j] = stemp;
	}
}

