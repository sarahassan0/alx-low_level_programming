#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to the head of the linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
