#include <stdio.h>
/**
 * main - the entery point of the code
 *
 * Return: Always (0)
 */
int main(void)
{
	for(int i = 0; i < 100; i++)
	{
		if(i < 10 )
			printf("0%d",i);
		else if (i > 10 && i % 10 == 1)
			printf("%d",i);
	}
}
