#include "main.h"
#include <stdio.h>
#include <string.h>
/*
 *_strpbrk - is function  searches a string for any of a set of bytes.
 *@s: is our first parameter
 *@accept: is our second parameter
 *Return: always r
 */
char *_strpbrk(char *s, char *accept)
{
	char *r = strpbrk(s, accept);

	return (r);
}
