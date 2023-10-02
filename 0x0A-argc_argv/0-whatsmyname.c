#include <stdio.h>
#include "main.h"

/**
 * main - function that print member name
 * @argc: our first paramete
 * @argv: our second parameter
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
