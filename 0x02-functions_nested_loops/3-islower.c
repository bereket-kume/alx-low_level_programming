#include "main.h"
/**
 *_islower - check if charcter is lower case
 *@c: character to checked
 *Return: return 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
