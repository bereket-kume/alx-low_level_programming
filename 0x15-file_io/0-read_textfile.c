#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return NULL;
	FILE *fp = (filename, 'r');
	if(filename == NULL)
		return NULL;
	char buffer[256];
	ssize_t total_letters = 0;
	 while (letters > 0 && fgets(buffer, sizeof(buffer), file) != NULL)
	 {
		 size_t len = strlen(buffer);
		  if (letters < len)
			{
			buffer[letters] = '\0';
			len = letters;
			}
		  if (fputs(buffer, stdout) == EOF)
		  {
			  fclose(file);
			  return 0;
		  }
		  total_letters += len;
		  letters -= len;
	 }
	 fclose(file);
	 return total_letters;
}
