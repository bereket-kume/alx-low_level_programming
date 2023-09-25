#include "main.h"
/*
 *@_memset - that fills memory with a constant byte.
 *@s: is our first parameter
 *@n: is our second parameter
 *return: always s
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
