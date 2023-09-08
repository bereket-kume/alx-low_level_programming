#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - generate random number
 *
 * REturn: Always (0)
 **/
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		if (n > 0)
			printf("%d and is greater than 5 /n", n);
		else if (n == 0)
			printf("%d and is 0\n", n);
		else
			printf("%d and is less than 6 and not 0", n);
		return (0);
}i
