#include <stdio.h>

/**
 * main- fibonacci
 *
 *
 * Return: 0
 **/

int main(void)
{
	int i;
	int a = 0, b = 1;
	int sum = a + b;
	
	printf("%d, %d, ", a, b);
	for (i = 3; i < 50; ++i)
	{
		printf("%d, ", sum);
		a = b;
		b = sum;
		sum = a + b;
	}
	putchar('\n');
	return (0);
}	
