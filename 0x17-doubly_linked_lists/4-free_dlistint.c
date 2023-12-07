#include "lists.h"
/**
 *free_dlistint - is function free list
 *@head: list head
 *return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode;

	while (head != NULL)
	{
		currentNode = head;
		head = head->next;
		free(currentNode);
	}
}

