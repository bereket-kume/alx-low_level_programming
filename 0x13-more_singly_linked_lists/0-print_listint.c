#include "lists.h"

size_t print_listint(const listint_t *h)
{
	int count = 0;
	struct listint_s *ptr = NULL;
	ptr = h;
	while(ptr != NULL)
	{
		printf("%d ", ptr);
		count++;
		h = h->next;
	}
	return (count);
}
