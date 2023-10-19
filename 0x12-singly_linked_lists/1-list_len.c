#include "lists.h"
/**
 *list_len - is function that return lenght
 *@h: is argument
 *Return: len
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
