#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
	struct dlistint_s currentNode = h;
	while (currentNode != NULL)
	{
		printf("%d",currentNode-n);
		currentNode = currentNode->next;
	}	
