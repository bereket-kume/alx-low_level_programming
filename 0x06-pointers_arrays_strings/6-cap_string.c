#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 *cap_string - is functio that capitalizes
 *@str: is our first function
 *Return: always str
 */
char *cap_string(char *str)
{
	int i = 0;

	str[0] = toupper(str[0]);
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '.')
		{
			i++;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = toupper(str[i]);
		}
		}
		else if (str[i] == '	')
		{
			str[i] = ' ';
		}
		else if (str[i] == '\n')
		{
			i++;
			str[i] = toupper(str[i]);
		}
		else
		{
			i++;
		}

	}
	return (str);
}
