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
	newNode->prev = NULL;
	if (*head != NULL)
	{
		*head = newNode;
	}
	else
	{
		dlistint_t *currentNode = *head;
		while (currentNode->next != NULL)
		{
			currentNode = currentNode->next;
		}
		currentNode->next = newNode;
		newNode->prev = currentNode;
	}
	return (newNode);
}
