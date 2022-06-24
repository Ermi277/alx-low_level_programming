#include <stdio.h>

/**
 * main - print name
 * @argc: number of argument
 * @argv: argument command
 * Return: 0
 */

int main(int argc, char *argv[])
{
	argc++;
	printf("%s\n", *argv);
	return (0);
}
