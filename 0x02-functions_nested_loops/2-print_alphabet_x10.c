#include "main.h"
/**
 *function: to print alphabet 
 *
 *Return: nothing
 */
void print_alphabet_x10(void)
{
	int letter;
	int i;

	for (i < 0; i < 11; i++)
	{
		for ( letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
