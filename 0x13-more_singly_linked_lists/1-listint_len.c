#include "lists.h"
/**
 *listint_len - is function that returns
 *@h: argument of our function
 *Return: always count
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
