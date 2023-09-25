#include "main.h"
/*
 *_memcpy - is fuunction that copies memory area
 *@dest: is first parameter
 *@src: is second parameter
 *@n: is third parameter
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
