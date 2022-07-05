#include "main.h"

/**
 * _memcpy - copy
 * @dest: destination adress
 * @src: source adress
 * @n: size of memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	while (i < j)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
