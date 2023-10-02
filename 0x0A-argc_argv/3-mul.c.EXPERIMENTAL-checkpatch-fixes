#include <stdio.h>
#include "main.h"

/**
 * _atoi - interger convereter
 * @s: our first parameter
 *
 * Return: string
 */
int _atoi(char *s)
{
	int index, de, n, len, f, digit;

	index = 0;
	de = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (index < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[index] >= '0' && s[index] <= '9')
		{
			digit = s[index] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[index + 1] < '0' || s[index + 1] > '9')
				break;
			f = 0;
		}
		index++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiply number together
 * @argc: our first parameter
 * @argv: our second parameter
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
