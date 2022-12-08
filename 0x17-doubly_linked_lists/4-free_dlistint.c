#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head node
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (h)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
