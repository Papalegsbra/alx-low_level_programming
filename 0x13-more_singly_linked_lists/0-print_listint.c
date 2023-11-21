#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: is the pointer to the head of the list
 * Returns: the number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_nodes++;
	}
	return (count_nodes);
}
