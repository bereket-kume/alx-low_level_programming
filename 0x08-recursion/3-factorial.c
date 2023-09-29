#include "main.h"
/**
 *factorial - is function that return factorial of number
 *@n: is our first parameter
 *Return: always different value
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - : 1));
	}
}
