#include "lists.h"

/**
 * list_len - count number of elements in the linked list
 * @h: linked list adress
 * Return: number of element
 */

size_t lit_len(const list_t *h)
{
	size_t elt = 0;

	while (h)
	{
		elt++;
		h = h->next;
	}
	return (elt);
}
