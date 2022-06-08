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

	for (i = 3; i < 53; ++i)
	{
		if (i < 52)
		{
			printf("%ld, ", sum);
			a = b;
			b = sum;
			sum = a + b;
		}
		else if (i == 52)
		{
			printf("%ld", sum);
		}
	}
	putchar('\n');
	return (0);
}
