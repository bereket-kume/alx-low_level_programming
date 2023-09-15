#include "main.h"
/**
 *print_line - is function that is used to pritn line
 *@n: parameter of the function
 *Return: nothing
 */
void print_line(int n)
{
	int numi;

	for (numi = 0; numi < n; numi++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
