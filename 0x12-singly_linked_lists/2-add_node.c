#include "lists.h"

/**
 * add_node - adds new node
 * @head: head of list_t list
 * @str: string to be added
 * Return: Null or adress of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	char *ins;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	ins = strdup(str);
	if (ins == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str = ins;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
