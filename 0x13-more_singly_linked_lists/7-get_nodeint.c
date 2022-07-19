#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth value of a list
 * @head: pointer to the address of node
 * @index: nth node
 * Return: value of the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
