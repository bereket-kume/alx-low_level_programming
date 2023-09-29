#include "main.h"
/**
 *_strlen_recursion - s function hat return length of string
 *@s: is our first parameter
 *Return: 0 and length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
