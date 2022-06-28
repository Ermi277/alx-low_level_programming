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

	if (str == NULL)
	{
		return (NULL);
	}
	ct = malloc(sizeof(char));
	if (ct != 0)
	{
		for (i = 0; ct[i] != '\0'; i++)
		{
			ct[i] = ct[i];
		}
	}
	else
	{
		return (NULL);
	}
	ct[i] = '\0';
	return (ct);
}
