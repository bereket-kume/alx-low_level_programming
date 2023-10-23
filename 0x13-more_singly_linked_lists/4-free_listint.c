#include "lists.h"
/**
 *free_listint - is function that free memory
 *@head: is parameter
 *Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *amma = head;
	listint_t *next;

	while (amma != NULL)
	{
		next = amma->next;
		free(head);
		amma = next;
	}
}
