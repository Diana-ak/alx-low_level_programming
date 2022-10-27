#include "main.h"

/**
 * free_listint - frees a element of a list
 * @head: head node
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}