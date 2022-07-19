#include "lists.h"

/**
 * listint_len - returns number of elements
 * @h: pointer to the header adress
 * Return: node
 */

size_t listint_len(const listint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
