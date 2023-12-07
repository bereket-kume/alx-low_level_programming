#include "lists.h"
/**
 *print_dlistint - is function that print
 *@h: is our first parmeter
 *Return: x always
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *currentNode = h;
	size_t x = 0;

	while (currentNode != NULL)
	{
		printf("%d\n", currentNode->n);
		currentNode = currentNode->next;
		x++;
	}
	return (x);
}
