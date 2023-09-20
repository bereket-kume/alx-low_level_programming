#include "main.h"
#include <string.h>
/**
 *_strcat - is function that concante strings
 *@dest: is our first parameter
 *@src: is our second parameter
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest,src);
	return (dest);
}

