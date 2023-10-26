#include "main.h"
/**
 *set_bit - is function that sets value of a bit to 1
 *@n: is parameter to function
 *@index: it is index nothing
 *Return: 1
 */
int set_bit(unsiged long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	unsigned long int mask = 1ul << index;
	*n |= mask;
	return (1);
}
