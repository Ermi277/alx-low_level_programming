#include "main.h"

/**
 * _realloc - relocates memory block
 * @ptr: previous memory pointer
 * @old_size: allocated space for previous memoryblock
 * @new_size: allocated space for new memory block
 * Return: no return
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *ptr2;
	void *str;
	char *c;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		str = malloc(new_size);
		if (str == NULL)
			return (NULL);
		return (str);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr2 = ptr;
	str = malloc(sizeof(*ptr2) * new_size);
	if (str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	c = str;
	for (i = 0; i < old_size && i < new_size; i++)
		c[i] = *ptr2++;
	free(ptr);
	return (str);
}
