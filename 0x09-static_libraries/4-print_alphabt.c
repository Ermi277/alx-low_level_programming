#include <stdio.h>

/**
 * main - except q and e
 *
 *
 * Return: i hope it will be  0
 **/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e')
		{
		}
		else if (i == 'q')
		{
		}
		else
			putchar (i);
	}
	putchar('\n');
	return (0);
}
