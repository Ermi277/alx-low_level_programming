#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry
 *
 * Return: 0
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%s\n", "$n is negative");
	}
	else if (n == 0)
	{
		printf("%s\n", "$n is zero");
	}
	else if (n > 0)
	{
		printf("%s\n", "$n is posetive");
	}
	return (0);
}
