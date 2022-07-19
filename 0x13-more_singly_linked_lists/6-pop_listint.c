#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete the head node
 * @head: pointer to the head node
 * Return: 0 or data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);
	tmp = *head;
	data = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (data);
}

