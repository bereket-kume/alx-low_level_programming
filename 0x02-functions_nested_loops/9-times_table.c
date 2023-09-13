#include "main.h"
/**
 *times_table - prints time table
 *
 *Return: returns nothing
 */
void times_table(void)
{
	int digit, multi,res;
	for (digit = 0; digit <= 9; digit++)
	{
		putchar('0');
	for (multi = 1; mult <= 9; multi++)
	{
		_putchar(',');
		_putchar(' ');
		res = digit * multi;
		if (res <= 9)
			_putchar(' ');
		else
			_putchar((res / 10) + '0');
		_putchar((res % 10) + '0');
	}
	putchar('\n');
	}
}
