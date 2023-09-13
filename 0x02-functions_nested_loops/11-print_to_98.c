#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - print number
 *@n: parametet of function
 *Return: nothing
 */
void print_to_98(int n)
{	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
			printf("%d, ", i);
		printf("%d ", 98);
	}
	else
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
		printf("%d ", 98);
	}
}
