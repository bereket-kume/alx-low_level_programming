#include "main.h"
/**
 *_isdigit - is function that check number
 *@c: is parameter
 *Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
