#include "main.h"
#include <string.h>
/**
 *_strncpy - is function that copies a string
 *@dest: iis first parameter
 *@src: is second parameter
 *@n: is third parameter
 *Return: Always dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
