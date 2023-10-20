#include "lists.h"

void print_message(void) __attribute__((constructor));
/**
 *print_message - si function that print strng
 */
void print_message(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
