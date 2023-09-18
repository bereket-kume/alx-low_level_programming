#include <unistd.h>
/**
 * _putchar - is function that display
 *@c: is parameter our function
 *Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
