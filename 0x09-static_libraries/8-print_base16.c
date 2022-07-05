#include <stdio.h>

/**
 * main - print hexadecimal
 *
 *
 * Return: expected 0
 **/

int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	for (j = 'a'; j < 'g'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
