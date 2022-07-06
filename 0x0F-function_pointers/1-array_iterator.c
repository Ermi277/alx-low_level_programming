#include "function_pointers.h"

/**
 * array_iterator - iteratos an array
 * @array: array to be iterated
 * @action: function pointer
 * @size: size of the array to be iterated
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return (0);
	while (size < 0)
	{
		action(*array);
		array++;
		size--;
	}
}
