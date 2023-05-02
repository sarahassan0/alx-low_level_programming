#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *
 *Return: empty
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	node = *head;
	*head = node->next;
	n = node->n;
	free(node);
	return (n);
}
