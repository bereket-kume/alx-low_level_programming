#include "main.h"
/**
 *_isupper - is function that checks letter is upper case letter
 *@c: it parameter to our function
 *Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
