#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 *cap_string - is functio that capitalizes
 *@str: is our first function
 */
char *cap_string(char *str)
{
	char *t = strtok(str," ");
	while (t != NULL)
       	{
		t[0] = toupper(t[0]);
		t = strtok(NULL, " ");

	}
	return (str);
}
