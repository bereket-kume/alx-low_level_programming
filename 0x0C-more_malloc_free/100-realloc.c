#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	long usigned int *new_size;
	new_size = malloc(new_size);
	size_t cop_size;
	cop_size = (old_size < new_size) ? old_size : new_size;
	memcpy(new_ptr, ptr, cop_size);
	free(ptr);
	return  (new_ptr);
}

