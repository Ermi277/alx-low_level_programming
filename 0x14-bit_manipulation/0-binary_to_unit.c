#include "main.h"

/**
 * binary_to_unit - convert binary to decimal
 * @b: binary character
 * Return: number
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int num = 0;
	int i = 0, j = 1;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		++i;
	}
	for (i; i>=0; i--)
	{
		if (i > 0)
		{
			if (b[i-1] != '1' && b[i-1] != '0')
				return (0);
			num = num + ((b[i-1] - '0') * j);
			j *= 2;
		}
	}
	return (num);
}
