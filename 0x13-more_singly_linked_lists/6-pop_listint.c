#include "main.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: head node
 *
 * Return: data of head node
 *0 on empty
 */

int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);
	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
}
