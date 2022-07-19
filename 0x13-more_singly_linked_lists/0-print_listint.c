#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - print the elements of node
 * @h: head pointer
 * Return: node
 */

size_t print_listint(const listint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}

