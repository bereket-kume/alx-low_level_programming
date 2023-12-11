#include "main.h"
#include <string.h>
/**
 *@*_strcat - is function that concatenates two strings
 *@dest: is our first parameter
 *@src: is our second parameter
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}

