#include "lists.h"

/**
 * free_listint2 - free list 2
 * @head: pointer to the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL, *tmp1 = NULL;

	if (*head == NULL)
		return;
	tmp = *head;
	while (tmp != NULL)
	{
		tmp1 = tmp->next;
		free(tmp);
		tmp = tmp1;
	}
	*head = NULL;
}
