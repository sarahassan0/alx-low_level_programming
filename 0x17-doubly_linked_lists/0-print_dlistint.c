#include "lists.h"

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_count;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		nodes_count++;
	}
	return (nodes_count);
}
