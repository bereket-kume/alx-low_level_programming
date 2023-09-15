#include <stdio.h>
/**
 *main - is the entery point of the code
 *
 *Return: Always 0.
 */
int main(void)
{
	int index;

	for (index = 1; index <= 100; index++)
	{
		if (index % 3 == 0 && index % 5 == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else if (index % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else if (index % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else
		{
			printf("%d", index);
		}
	}
	putchar('\n');
	return (0);
}
