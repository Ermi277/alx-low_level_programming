#include "main.h"

/**
 * print_square - print squaer
 * @s: size of square
 *
 * Return: no return
 */

void print_square(int s)
{
	int i, j;

	if (s < 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < s; i++)
		{
			for (j = 0; j <i; j++)
			{
				putchar('#');
				putchar('\n');
			}
		}
	}
}
