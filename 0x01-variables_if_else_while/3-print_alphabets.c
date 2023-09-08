#include <stdio.h>
/**
 *main - display lower case and upper case alphabet
 *
 * Return Always (0)
 */
int main(void)
{
	int char = letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
