#include "main.h"

/**
 * _calloc - set memory for any array
 * @nmemb: int 1
 * @size: int 2
 * Return: no return
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *str;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	c = str;
	for (i = 0; i < (nmemb * size); i++)
		c[i] = '\0';
	return (str);
}
