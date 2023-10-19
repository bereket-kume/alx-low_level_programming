#include "lists.h"

size_t print_list(const list_t *h)
{
	int length = 0;
	list_t* amma = h;
	while (amma != NULL)
	{
		_putchar(amma->str);
		length++;
		amma = amma->next;
	}
	putchar('\n');
	return (0);

}
