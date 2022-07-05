#include "main.h"

/**
 * str_concat - concat one string to other
 * @s1: string 1
 * @s2: string 2
 * Return: null if failure
 */

char *str_concat(char *s1, char *s2)
{
	char *ct;
	unsigned int c;
	int i = 0, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	ct = malloc(sizeof(char) * (i + j + 1));
	if (ct == NULL)
	{
		return (NULL);
	}
	for (c = 0; s1[c] != '\0'; c++)
	{
		ct[c] = s1[c];
	}
	for ( ; s2[k] != '\0'; c++)
	{
		ct[c] = s2[k];
		k++;
	}
	return (ct);
}
