#include "main.h"
/**
 *positive_or_negative: ia function that number
 *@i: is parameter to the function
 *Return: nothing
 */

void postitive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}

