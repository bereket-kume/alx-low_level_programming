#include "main.h"

/**
 *print_most_numbers - is function thst prints number
 *
 *Return: noting
 */
void print_most_numbers(void)
{
	int numi;
	for (numi = 48; numi < 58; numi++)
	{
		if (numi == 50 || numi == 52)
			continue;
		else
			_putchar(numi);
	}
	_putchar('\n');
}
