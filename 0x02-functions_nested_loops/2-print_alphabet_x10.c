#include "main.h"
/**
 *print_alphabet_x10 - print alphabet letters
 *"10" times
 *desc: using for loop to display alphabet number
 *
 *Return: nothing
 */
void print_alphabet_x10(void)
{
	int letter;
	for (int i = 0; i <= 10; i++)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
	}
}
