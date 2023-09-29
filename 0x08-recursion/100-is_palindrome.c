#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
/**
 *is_palindrome - is function that display string
 *@s: is our first parameter
 *Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int num = strlen(s);
	int i = 0;
	int j = num - 1;

	while (i < j)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
		i++;
		j--;
	}
	return (1);
}
