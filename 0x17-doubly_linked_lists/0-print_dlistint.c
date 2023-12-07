#include "lists.h"
#include <stdio.h>

size_t print_dlistint(const dlistint_t *h)
{
    const dlistint_t *currentNode = h;
    size_t x = 0;

    while (currentNode != NULL)
    {
        printf("%d", currentNode->n);
        currentNode = currentNode->next;
        x++;
    }
    return x;
}
