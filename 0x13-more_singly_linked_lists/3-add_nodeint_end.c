#include "lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *amma = *head;
	temp->n = n;
	while (amma != NULL)
	{
		amma = amma->next;
	}
	amma->next = temp;
	temp->next = NULL;
	return (temp);
}
