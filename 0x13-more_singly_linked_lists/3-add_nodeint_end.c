#include "lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	temp->n = n;
	while (head != NULL)
	{
		head = head->next;
	}
	head->next = temp;
	temp->next = NULL;
	return (temp);
}
