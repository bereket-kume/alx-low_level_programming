#include <stdio.h>
/**
 * main - display lower case alphabet
 *
 * Return: Always 0.
 */
int main(void)
{
 	char letter;
 	for(letter='a'; letter <= 'z';letter ++)
		putchar(letter);
	putchar('\n');
	return (0);
}
