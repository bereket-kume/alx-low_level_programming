#include <stdio.h>
/**
 *more_numbers - is function to print number
 *
 *Return: nothing
 */
void more_numbers(void)
{
	int numi, num;
	for (numi = 0; numi < 10; numi++)
	{
		for (num = 0; num <= 14; num++)
		{
			printf("%d",num);
		}
		printf("\n");
	}
}
