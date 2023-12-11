#include "main.h"
#include <string.h>
/**
 *_strchr - is function that locates a character in a string using pointer
 *@s: is our first parameter
 *@c: is our second parameter
 *Return: always new line
 */
char *_strchr(char *s, char c)
{
	char *ret;

	ret = strchr(s, c);
	return (ret);

}
