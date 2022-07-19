#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at given index
 * @head: pointer to node
 * @index: index of the list where node inserted
 * @n: value of the node to be inserted
 * Return: pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ins;
	unsigned int i = 0;

	ptr = *head;
	ins = malloc(sizeof(listint_t));
	if (ins == NULL)
		return (NULL);
	ins->n = n;
	if (idx == 0)
	{
		ins->next = ptr;
		*head = ins;
		return (ins);
	}
	while (i < (idx - 1))
	{
		if (ptr == NULL || ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
		i++;
	}
	ins->next = ptr->next;
	ptr->next = ins;
	return (ins);
}
