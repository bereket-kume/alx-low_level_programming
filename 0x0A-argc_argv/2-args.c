#include <stdio.h>
#include "main.h"

/**
 * main - display all argument
 * @argc: first parameter
 * @argv: second parameter
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}

	return (0);
}
