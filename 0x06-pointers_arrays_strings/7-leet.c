#include "main.h"
#include <stdio.h>
/**
 *leet - is function that change text
 *@s: first parameter
 *Return: always char
 */
char *leet(char *s)
{
	char myarray[] = "aeotlAEOTL";
	char mycode[] = "4307143071";
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
			{
			if (*(s + i) == myarray[j])
			{
				*(s + i) = mycode[j];
			}
			}
		i++;
	}
	return (s);
}
