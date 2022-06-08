#include "stdio.h"
/**
 * main - sum 0 1024
 *
 *
 * Return: sum
 **/

int main(void)
{
	int i;
	int n = 0;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			n = n + i;
		}
	}
	printf("%d\n", n);
	return (0);
}
