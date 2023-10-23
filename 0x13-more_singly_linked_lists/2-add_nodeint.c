#include "lists.h"
/**
 *add_nodeint - is function that node at the begging
 *@head: head of our data
 *@n: data that is add at the begging
 *Return: always adderes of head element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	ptr->n = n;
	ptr->next = NULL;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
