#include "main.h"
#include <string.h>
#include <stdio.h>
int is_palindrome(char *s)
{
	int num = strlen(s);
	int i = 0;
	int j = num -1;

	while( i < j)
	{
		if(s[i] != s[j])
		{
			return (0);
		}
		else
		{
			return (1);
		}
		i++;
		j++;
	}
	return (1);

}

