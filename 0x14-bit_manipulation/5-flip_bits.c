#include "main.h"
/**
 *flip_bits - function that return number
 *@n: is our firat parameter
 *@m: is our second parametet
 *Return: always count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
		count++;
		diff &= (diff - 1);
	}
	return (count);
}
