#include <stdio.h>
/**
 * print_alphabet - print alphabet 
 *
 *main - entry point to the progrma
 *Return: Always (0)
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{ 
		putchar(letter);
	}
	putchar('\n');
};
