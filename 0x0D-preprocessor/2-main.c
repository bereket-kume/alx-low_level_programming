#include <stdio.h>
/**
 *main - is function that print file
 *@argc: si our first function
 *@argv: is our second parameter
 *Return: always 0
 */
int main(int argc, char **argv)
{
	if (argc > 1)
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}
