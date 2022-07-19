#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth value of a list
 * @head: pointer to the address of node
 * @index: nth node
 * Return: value of the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i <= index + 1; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
