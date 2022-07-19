#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print the elements of node
 * @h: head pointer
 * Return: node
 */

size_t print_listint(const listint_t *h)
{
	size_t node;

	if(h != NULL)
	{
		while (h)
		{
			node++;
			printf("%d\n", h->n);
			h = h->next;
		}
		return (node);
	}
}

