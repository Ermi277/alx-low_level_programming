#include "main.h"

/**
 * create_array - create an array
 * @size: size of an array
 * @c: char to be filled
 * Return: null or pointer  ct
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *ct;

	if (size == 0)
		return (NULL);
	else if (size != 0)
	{
		ct = malloc(sizeof(char) * size);
		if (size != 0)
		{
			for (i = 0; i < size; i++)
			{
				ct[i] = c;
			}
		}
	}
	return (ct);
}
