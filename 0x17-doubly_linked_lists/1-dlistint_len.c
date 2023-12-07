#include "lists.h"
/**
 *dlistint_len - is function that return lenght
 *@h: is head of our list
 *Return: always x
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *currentNode = h;
	size_t x = 0;

	while (currentNode != NULL)
	{
		currentNode = currentNode->next;
		x++;
	}
	return (x);
}
