#include "lists.h"

/**
 * sum_listint - sum the values of all node
 * @head: pointer to the first node
 * Return: 0 is always success
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
	}
	return (sum);
}

