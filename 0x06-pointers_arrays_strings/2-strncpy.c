#include "main.h"

/**
 * _strncpy - copy string
 * @dest: destination
 * @src: source
 * @n: size of the string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
