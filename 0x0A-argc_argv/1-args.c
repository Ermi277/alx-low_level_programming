#include <stdio.h>

/**
 * main - print number of argument
 * @argc: number of arg
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argv == NULL)
	{
		argc = 0;
		printf("%d\n", argc);
	}
	else
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
