#include "lists.h"

/**
 * reverse_listint - reverse the list
 * @head: pointer to the first node
 * Return: pointer to first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *aft, *bef;

	if (head == NULL || *head == NULL)
		return (NULL);
	bef = NULL;
	while ((*head)->next != NULL)
	{
		aft = (*head)->next;
		(*head)->next = bef;
		bef = *head;
		*head = aft;
	}
	(*head)->next = bef;
	return (*head);
}
