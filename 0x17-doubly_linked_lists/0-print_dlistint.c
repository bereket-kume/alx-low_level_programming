#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_s *currentNode = h;
	size_t x = 0;

	while (currentNode != NULL)
	{
		printf("%d", currentNode->n);
		currentNode = currentNode->next;
		x++;
	}	
	return x;
}
