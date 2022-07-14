#include "lists.h"

/**
 * free_list - frees list
 * @head: list_t pointer
 */

void free_list(list_t *head)
{
	list_t *tmp_list;
	
	while (head)
	{
		tmp_list = head->next;
		free(head->str);
		free(head);
		head = tmp_list;
	}
}

