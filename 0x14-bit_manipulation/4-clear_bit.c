#include "main.h"
/**
 *clear_bit - is function that clear bit
 *@n: is our first parameter
 *@index: is our second parmater
 *Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1ul << index);

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= mask;
	return (1);
}
