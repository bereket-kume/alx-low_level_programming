#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
int _putchar(char);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
