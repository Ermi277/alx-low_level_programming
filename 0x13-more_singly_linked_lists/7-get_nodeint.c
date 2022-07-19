#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth value of a list
 * @head: pointer to the address of node
 * @index: nth node
 * Return: value of the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	ptr = head;
	for (i = 0; i <= index; i++)
	{
		if (ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
	}
	return (ptr);
}
	

