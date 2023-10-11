#include "function_pointers.h"
/**
 *array_iterator - is function given as a parameter on each element
 *@array: is our first function
 *@size: size of our array
 *@action: that display array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
