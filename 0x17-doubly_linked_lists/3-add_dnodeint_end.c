#include "lists.h"
/**
 *add_dnodeint_end - is function that add element at the end
 *@head: is head of list
 *@n: value added to the list
 *Return: newNode
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = *head;
	if (*head != NULL)
	{
		(*head)->next = newNode;
	}
	*head = newNode;
	return (newNode);
}
