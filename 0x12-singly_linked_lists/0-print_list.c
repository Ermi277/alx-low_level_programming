#include "main.h"

/**
 * print_list - print the elements of a list
 * @h: list_t list
 * Return: number of node
 */

size_t print_list(const list_t *h)
{
	size_t nd = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nd++;
		h = h->next;
	}
	return (nd);
}
