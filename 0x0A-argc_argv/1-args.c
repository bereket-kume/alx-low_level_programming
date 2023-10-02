#include <stdio.h>
#include "main.h"

/**
 * main - function that number that passed to it
 * @argc: first argument
 * @argv: second argument
 *
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
