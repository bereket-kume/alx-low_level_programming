#include "main.h"
#include <string.h>
#include <stdio.h>
int is_palindrome(char *s)
{
	int i, j;
	int num = strlen(s);

	for (i = 0; i < num; i++)
	{
		if(s[i] >= 'A' && s[i] <= 'z')
		{
			s[i] += 32;
		}
	}

	for(i = 0, j = num -1; i < j; i++, j--)
	{
		if(s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}

