#include <stdio.h>

/**
 * main - print numbers using putchar
 *
 *
 * Return: if 0 great
 **/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
