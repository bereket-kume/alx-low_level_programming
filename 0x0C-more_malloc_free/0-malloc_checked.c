#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *malloc_checked - is function that returns
 *@b: is our first parameter
 *Return: always ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
