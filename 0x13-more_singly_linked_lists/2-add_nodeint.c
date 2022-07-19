#include "lists.h"

/**
 * add_nodeint - adds new node to the list
 * @head: pointer to the next node
 * @n: value of the node
 * Return: temporary adress of the next node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = NULL;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
