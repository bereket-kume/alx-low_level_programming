#include "main.h"
/**
 *_print_rev_recursion - is function that print string in reverse direction
 *@s: is our first parameter
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

