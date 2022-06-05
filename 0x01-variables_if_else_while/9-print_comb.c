#include <stdio.h>

/**
 * main - print with comma
 *
 *
 *
 * Return: expected 0
 **/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i < 9)
			putchar(',');
		else
			putchar('$');
	}
	return (0);
}
