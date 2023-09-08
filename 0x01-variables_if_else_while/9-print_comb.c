#include <stdio.h>
/**
 *main - display list of number
 *
 *Return; Always (0)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + ", ");
	putchar('\n');
	return (0);
}
