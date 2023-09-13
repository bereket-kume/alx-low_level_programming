#include "main.h"
/**
 *jack_bauer - print every minute of the day
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int minute;
	int hour;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 29; minute++)
		{
			_putchar(hour / 10);
			_putchar(hour % 10);
			_putchar(':');
			_putchar(minute / 10);
			_putchar(minute % 10);
			_putchar('\n');
		}
	}
}


