#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *array_range - is functon that create array of integeres
 *@min: first parameter
 *@max : our second function
 *Return: always NULL or myarr
 */
int *array_range(int min, int max)
{
	int *myarr;
	int i;

	if (min > max)
		return (NULL);
	myarr = (int *)malloc((max - min + 1) * sizeof(int));
	if (myarr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		myarr[i] = min;
	return (myarr);
}


