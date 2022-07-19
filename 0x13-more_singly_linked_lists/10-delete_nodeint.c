#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at specfied index
 * @head: pointer to head
 * @index: index of the node in the list
 * Return: 1 success; -1 not success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *del;
	unsigned int i = 0;

	del = *head;
	if (del == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(del);
		return (1);
	}
	while (i < (index - 1))
	{
		if (del->next == NULL)
			return (-1);
		del = del->next;
	}
	tmp = del->next;
	del->next = tmp->next;
	free(tmp);
	return (1);
}
