#include "main.h"

/**
 * _strncat - append the source string to destination but specified by user
 * @dest: destination string
 * @src: source string
 * @n: array
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int l1 = strlen(dest);
	int i = 0;

	if (n > sizeof(dest))
		n = sizeof(dest);
	while (i < n)
	{
		*(dest + l1 + i) = *(src + i);
		i++;
	}
	return (dest);
}
