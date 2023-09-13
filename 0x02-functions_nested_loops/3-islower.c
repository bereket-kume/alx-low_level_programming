#include "main.h"
/**
 *islower.c - is to check if letter is lower case
 *c is used as prameter
 *_islower: used to check for alphabet
 *Return: 1 if lower case , 0 if upper case
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
