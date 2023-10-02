#include "main.h"

/**
 * _isupper - function that change to upper
 * @c: our first parameter
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
