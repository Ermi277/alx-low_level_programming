#include <stdio.h>

/**
 * main - find the largest prime factor
 *
 * Return: 0
 */

int main(void)
{
	long int num = 612852475143;
	int maxF, dv = 2;

	while (num != 0)
	{
		if ((num % dv) != 0)
			dv = dv + 1;
		else
		{
			maxF = num;
			num = num / dv;
			if (num == 1)
			{
				printf("%d", maxF);
				break;
			}
		}
	}
	return (0);
}

