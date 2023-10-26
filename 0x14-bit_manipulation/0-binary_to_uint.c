#include "main.h"
/**
 *binary_to_uint - is function that convert binary to int
 *@b: is our first parameter
 *Return: always number
 */
unsigned int binary_to_uint(const char *b)
{
	return ((unsigned int)strtoul(b, NULL, 2));
}
