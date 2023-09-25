#include "main.h"
/**
 *_memset - is the function that fills memory with a constant byte.
 *@s: is our first parameter
 *@n: is our second parameter
 *@b: is our third function
 *Return: always s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
