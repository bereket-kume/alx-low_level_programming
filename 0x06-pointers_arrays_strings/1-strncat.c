#include "main.h"
#include <string.h>
/**
 *_strncat - is function that concatenates two strings
 *@dest: is first parameter
 *@src: is second parameter
 *@n: is third parameter
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
