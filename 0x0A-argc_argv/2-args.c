#include <stdio.h>

/**
 * main - print all argument passed
 * @argc: number of argument passed
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
