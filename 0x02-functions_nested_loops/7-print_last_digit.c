#include "main.h"
/**
 *print_last_digit - is function used to display last digit
 *@i: it is parameter
 *Return: Always 0
 */
int print_last_digit(int i)
{
	int digit = i % 10;
	if (digtit < 0)
		digit *= -1;
	_putchar (digit + '0');
	return (digit);
}
