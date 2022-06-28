#include "main.h"

/**
 * _strdup - allocated string in memory
 * @str: the string to be allocated
 * Return: Null or pointer
 */

char *_strdup(char *str)
{
	char *ct = NULL;
	unsigned int i;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		j++;
		s++;
	}
	ct = malloc(sizeof(char) * (j + )i);
	if (ct != 0)
	{
		for (i = 0; ct[i] != '\0'; i++)
		{
			ct[i] = str[i];
		}
	}
	else
	{
		return (NULL);
	}
	ct[i] = '\0';
	return (ct);
}
