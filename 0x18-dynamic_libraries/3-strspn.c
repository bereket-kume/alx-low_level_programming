#include "main.h"
#include <string.h>
/**
 * _strspn - is function  that gets the length of a prefix substring.
 *@s: is first parameret
 *@accept: is second parameter
 *Return: always
 */
unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}

