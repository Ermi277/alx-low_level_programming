#include "main.h"

/**
 * _strncat - append the source string to destination but specified by user
 * @dest: destination string
 * @src: source string
 * @n: array
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
