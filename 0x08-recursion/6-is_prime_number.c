#include "main.h"

/**
 * is_prime_number - check a number if it is prime
 * @n: integer to be checked
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n == 1 || n < 0)
	{
		i = 2;
		return (0);
	}
	if (i != n)
	{
		if (n % 1 == 0)
		{
			i = 2;
			return (0);
		}
		else
		{
			++i;
			is_prime_number(n);
		}
	}
	else
	{
		i = 2;
		return (1);
	}
}
