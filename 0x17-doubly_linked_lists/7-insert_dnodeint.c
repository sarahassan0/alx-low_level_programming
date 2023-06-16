#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the linked list
 * @idx: index where to insert the new node
 * @n: data of the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *node_to_insert_after;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	node_to_insert_after = get_dnodeint_at_index(*h, idx - 1);

	if (node_to_insert_after->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = node_to_insert_after;
	new->next = node_to_insert_after->next;

	new->next->prev = new;
	node_to_insert_after->next = new;

	return (new);
}
