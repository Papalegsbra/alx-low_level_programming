#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node to a list
 * @n: is the interger
 * @head: points to the pointer of the  head of the list
 *
 * Return: the new header node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	{
		if (new_node == NULL)
			printf("error message\n");
	}

	return (NULL);

	new_node->n = n;
	new_node->next = *head;

	return (new_node);
}
