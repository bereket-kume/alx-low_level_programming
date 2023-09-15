#include "main.h"
/**
 *print_square - it is function that used to print square
 *@size: parameter of our function
 *Return: nothing
 */
void print_square(int size)
{
	int index, jndex;

	for (index = 1; index <= size; index++)
	{
		for (jndex = 1; jndex <= size; jndex++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
