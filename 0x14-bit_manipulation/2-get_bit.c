#include "main.h"
/**
 *get_bit - is function that return index
 *@n: is  our argument
 *@index: our argument
 *Return: 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1ul << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n & mask) ? 1 : 0);
}
