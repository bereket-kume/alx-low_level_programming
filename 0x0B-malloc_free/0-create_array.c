#include "main.h"
#include <stdlib.h>
/**
 *create_array - is function hat creates an array of chars
 *@size: is siza of our array
 *@c: is our second parameter
 *Return: always array
 */
char *create_array(unsigned int size, char c)
{
	char *myarray = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (myarray == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		myarray[i] = c;
	}
	return (myarray);
}
