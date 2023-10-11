#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - is function that prints a name
 *@name: is our first function
 *@f: is our second parameter
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
