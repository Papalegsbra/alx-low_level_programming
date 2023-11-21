#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * listint_len - counts the number of elements in thelist
 * @h: Pointer to the head of the list
 * Return: is the number or elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
