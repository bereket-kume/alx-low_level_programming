#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	fp = open(filename, 'r');
	char buff[255];
	fgetc(buff, "%c", fp);
	_putchar(fp);
	fcolse(fp);
}
