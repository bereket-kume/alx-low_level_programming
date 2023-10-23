#include "lists.h"
/**
 *add_nodeint_end -is function that add element
 *@head: is our argument
 *@n: is our argument
 *Return: always adderes of the last element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *amma = *head;

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		while (amma->next != NULL)
		{
			amma = amma->next;
		}
		amma->next = temp;
	}
	return (temp);
}
