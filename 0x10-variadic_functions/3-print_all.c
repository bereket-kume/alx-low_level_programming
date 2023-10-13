#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
void print_all(const char* const format, ...)
{
    va_list args;
    va_start(args, format);

    int i;
    char c;
    float f;
    char* s;
    int num;
	
    i=0;
    while (format[i] != '\0') {
        if (format[i] == 'c') {
            c = va_arg(args, int);
            printf("%c", c);
        } else if (format[i] == 'i') {
            num = va_arg(args, int);
            printf("%d", num);
        } else if (format[i] == 'f') {
            f = va_arg(args, double);
            printf("%f", f);
        } else if (format[i] == 's') {
            s = va_arg(args, char*);

            if (s != NULL) {
                printf("%s", s);
            } else {
                printf("(nil)");
            }
        }

        i++;
    }

    va_end(args);

    printf("\n");
}
