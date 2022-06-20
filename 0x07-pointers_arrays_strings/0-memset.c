#include "main.h"


/**
 * _memset - set randome value for specific memory locations
 * @s: memory adress
 * @b: value to be set
 * @n: number of memory adress to be set
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	int k = n;

	while (i < k)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
