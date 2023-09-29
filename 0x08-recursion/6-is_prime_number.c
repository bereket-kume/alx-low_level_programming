#include "main.h"
/**
 *is_prime_number - is function returns
 *@n: is our first parameter
 *Return: 1 or 0
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	for (i = 2; i * i < n; i++)
	{
		if (i % 2 == 0)
			return (0);
		else
			return (1);
	}
	return (1);
}
