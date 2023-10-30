#include "main.h"
/**
 *append_text_to_file - function that is append file
 *@filename: is our first parameter
 *@text_content: is our second parameter
 *Return: always
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file = fopen(filename, "a");
	size_t len = strlen(text_content);

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (access(filename, F_OK) == 0 ? 1 : -1);
	if (file == NULL)
		return (-1);
	if (fwrite(text_content, sizeof(char), len, file) != len)
	{
		fclose(file);
		return (-1);
	}
	fclose(file);
	return (1);
}
