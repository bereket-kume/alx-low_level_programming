#include "lists.h"
/**
 *free_list - function that free memory
 *@head: our first srgument
 *Return: nothing
 */
void free_list(list_t *head)
{
	list_t *amma;

	if (head == NULL)
	{
		return;
	}
	while (head)
	{
		amma = head->next;
		free(head->next);
		free(head);
		head = amma;
	}
}
