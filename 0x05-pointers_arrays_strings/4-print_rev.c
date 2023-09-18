#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *print_rev - is function that reverse our function
 *@s: is parameter of our function
 *Return: nothing
 */
void print_rev(char *s)
{
	int jndex;

	for (jndex = 0; s[jndex] != '\0'; jndex++)
						;
	for (jndex = jndex - 1; s[jndex] != '\0'; jndex--)
	{
		_putchar(s[jndex]);
	}
	_putchar('\n');
}
