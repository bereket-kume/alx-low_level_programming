#include "main.h"
/**
 *swap_int - is our function that swap number
 *@a: is our first parameter
 *@b: is our second parameter
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
	int swapedNumber;

	swapedNumber = *a;
	*a = *b;
	*b = swapedNumber;
}

