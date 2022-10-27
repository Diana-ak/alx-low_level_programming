#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head node of the list
 *
 * Return:number of the nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->str);
		h = h->next;
		n++;
	}
	return (n);
}