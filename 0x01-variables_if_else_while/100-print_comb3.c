#include <stdio.h>

/**
 * main -  print combo
 *
 *
 * Return: alway 0
 **/

int main(void)
{
	int i;
	int k = 1;
	int j;

	for (i = 0; i < 10; i++)
	{	
		for (j = k; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
			else
			{
			}
		}
		k++;
	}
	putchar('\n');
	return (0);
}
