#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
	if(str == NULL)
	{
		return (NULL);
	}
	int size;
	size = strlen(str);
	char* d;
	d = (char*)malloc((size + 1) * sizeof(char));
	strcpy(d, str);
	return (d);
}


