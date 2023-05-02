#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer
 * @index: index of node
 *
 * Return: pointer to the index node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *tmp;

	tmp = *head;

	if (head == NULL || *head == NULL)
	{
		return (1);
	}
	if (index == 0)
	{
		del = *head;
		if (del->next != NULL)
			*head = del->next;
		else
			*head = NULL;

		free(del);
		return (1);
	}

	while (--index)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
	}
	del = tmp->next;
	tmp->next = tmp->next->next;
	free(del)
	return (1);
}
