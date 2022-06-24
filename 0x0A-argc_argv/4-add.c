#include <stdio.h>
#include <stdlib.h>

/**
 * main - sum a series of numbers
 * @argc: number of argument
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0, c = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
			c = 1;
	}
	if (c == 0)
	{
		printf("%d", sum);
	}
	else
		printf("Error");

	putchar('\n');
	return (0);
}

