#include "lists.h"

/**
 * add_node_end- adds new node at the end
 * @head: head of list_t
 * @str: tring
 * Return: Null or next element adress
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *ins;
	list_t *new, *end;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	ins = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str = ins;
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (*head);
}
