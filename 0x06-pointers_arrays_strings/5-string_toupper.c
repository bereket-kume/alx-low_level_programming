#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 **string_toupper - function that changes all lowercase
 *@str: is our parameter
 *toupper: function change to upper case
 *Return: always str
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}
