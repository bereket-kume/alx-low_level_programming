#include "main.h"
/**
 *create_file - is function that is used to create file
 *@filename: is our first parameter
 *@text_content: our second parameter
 *Return: 1 always
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file = fopen(filename, "w");

	if (filename == NULL)
		return (-1);
	if (file == NULL)
		return (-1);
	if (text_content != NULL)
	{
		size_t len = strlen(text_content);

		if (fwrite(text_content, sizeof(char), len, file) != len)
		{
		fclose(file);
		return (-1);
		}
	}
	if (chmod(filename, S_IRUSR | S_IWUSR) != 0)
		return (-1);
	return (1);
}
