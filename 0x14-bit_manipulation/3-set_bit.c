#include "main.h"
/**
 *set_bit - is function that sets value of a bit to 1
 *@n: is parameter to function
 *@index: it is index nothing
 *Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1ul << index;
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= mask;
	return (1);
}
