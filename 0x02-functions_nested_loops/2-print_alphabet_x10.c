#include "main.h"
/**
 *function: to print alphabet
 *desc: using for loop to display alphabet number
 *
 *Return: nothing
 */
void print_alphabet_x10(void)
{
	int letter;
	int i;

	while (i++ <= 9)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
		_putchar('\n');
	}
}
}
