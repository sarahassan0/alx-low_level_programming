#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the start of the linked list.
 * @n: value of n in new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tail;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	new_node->next = NULL;
	while ((*head)->next != NULL)
		tail = *head;
	new_node->prev = tail;
	tail->next = new_node;

	return (new_node);
}
