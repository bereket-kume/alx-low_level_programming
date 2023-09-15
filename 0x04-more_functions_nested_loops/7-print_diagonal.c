#include "main.h"

/**
 *print_diagonal - is function to print diagonal
 *@n: is parameter that is given to the function
 */
void print_diagonal(int n)
{
	int jen, index;

		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
		for (jen = 0; jen < n; jen++)
		{
			for (index = 0; index < jen; index++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		}
}

