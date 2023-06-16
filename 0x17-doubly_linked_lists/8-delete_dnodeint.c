#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @head: double pointer to the linked list
 * @index: index at which to delete node
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	del_node = *head;
	if (index == 0)
	{
		*head = del_node->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(del_node);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		del_node = del_node->next;
		if (del_node == NULL)
			return (-1);
	}
	del_node->prev->next = del_node->next;
	if (del_node->next != NULL)
	{
		del_node->next->prev = del_node->prev;
	}

	free(del_node);
	return (1);
}
