#include "lists.h"
/**
 *add_node_end- is function that add node at the last
 *@head: is our argument of our function
 *@str: data
 *Return: always new
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	int len;
	list_t *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	for (len = 0; str[len];)
	{
		len++;
	}
	new->len = len;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (new);
}
