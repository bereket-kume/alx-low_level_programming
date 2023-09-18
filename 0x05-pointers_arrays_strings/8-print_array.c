#include "main.h"
#include <stdio.h>
/**
 *print_array - is the function that array
 *@a: parameter of our function
 *@n: parameter of our function
 *
 *Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
