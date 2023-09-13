#include "main.h"
/**
 *_abs - give us absoulte value of number
 *@i: value passed as parameter
 *Return: Always 0
 */
int _abs(int i)
{

	if (i > 0)
		return (i);
	else if (i < 0)
		return (-i);
	else
		return (0);
}
