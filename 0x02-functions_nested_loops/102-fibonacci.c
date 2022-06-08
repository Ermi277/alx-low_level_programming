#include <stdio.h>

/**
 * main- fibonacci
 *
 *
 * Return: 0
 **/

int main(void)
{
	long int i;
	long int a = 0, b = 1;
	long int sum = a + b;

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
