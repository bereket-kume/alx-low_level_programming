#include "main.h"
#include <string.h>
/**
 * _strstr - is function locates a substring
 * @haystack: is our first parameter
 * @needle: is our second parameter
 * Return: always ret
 */
char *_strstr(char *haystack, char *needle)
{
	char *ret;

	ret = strstr(haystack, needle);
	return (ret);
}
