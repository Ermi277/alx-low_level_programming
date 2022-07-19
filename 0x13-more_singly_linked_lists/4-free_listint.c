#include "lists.h"

/**
 * free_listint - free the list
 * @head: pointer to the first node adress
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = NULL, *tmp1 = NULL;

	tmp = head;
	while (tmp != NULL)
	{
		tmp1 = tmp->next;
		free(tmp);
		tmp = tmp1;
	}
}
