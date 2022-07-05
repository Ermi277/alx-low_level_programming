#include "main.h"

/**
 * malloc_checked - allocates memory dynamically
 * @b: size of the memory to be allocated
 * Return: void no return
 */

void *malloc_checked(unsigned int b)
{
	void *str = malloc(b);

	if (str == NULL)
		exit(98);
	return (str);
}
