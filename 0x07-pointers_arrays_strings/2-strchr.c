#include "main.h"
/**
 *_strchr - is function that locates a character in a string using pointer
 *@s: is our first parameter
 *@c: is our second parameter
 *Return: always new line
 */
char *_strchr(char *s, char c)
{
	if (*s == '\n')
	{
		return (s);
	}
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\n')
		return (s);
	return ('\0');
}
