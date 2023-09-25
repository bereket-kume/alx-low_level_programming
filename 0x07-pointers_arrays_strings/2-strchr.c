#include "main.h"
/**
 */
char *_strchr(char *s, char c)
{
	if (*s == '\n')
	{
		return (s);
	}
	while(*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\n')
		return (s);
	return ('\0');
}
