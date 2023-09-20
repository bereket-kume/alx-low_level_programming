#include "main.h"
#include <string.h>
/**
 *reverse_array - function that reverses the content of an array of integers
 *@a: is the first parameter
 *@n: is the second parameter
 *
 */
void reverse_array(int *a, int n)
{
	int start = 0;

	int end = n - 1;
		while (start < end)
		{
			int temp = a[start];

			a[start] = a[end];
			a[end] = temp;
			start++;
			end--;
		}
}
