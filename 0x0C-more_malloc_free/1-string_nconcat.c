#include "main.h"

/**
 * string_nconcat - concate string 2 to string 1
 * @s1: string 1
 * @s2: string 2
 * @n: number of string to concate
 * Return: character pointer or null if error
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ct;
	unsigned int len = n;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;
	ct = malloc(sizeof(char) * (len + 1));
	if (ct == NULL)
		return (NULL);
	len = 0;
	for (i = 0; s1[i]; i++)
		ct[len++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		ct[len++] = s2[i];
	ct[len] = '\0';
	return (ct);
}
