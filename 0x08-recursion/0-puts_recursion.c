#include "main.h"
/**
 *_puts_recursion - is function that print string and new
 *@s: is our firtst parameter
 *Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s +1);
	}

}
