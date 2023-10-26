#include "main.h"
void print_binary(unsigned long int n)
{
	int numbits = sizeof(numbits)*8;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for(i = numbits -1; i >= 0; i--)
	{
		unsigned long int mask = 1u << 1;
		_putchar((n & mask)? '1' : '0');
	}
}
