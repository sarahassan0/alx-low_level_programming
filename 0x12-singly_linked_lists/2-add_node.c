#include "lists.h"

/**
  * add_node - add node at beginning of a list_t list.
  *
  * @head: head of double pointer
  * @str: string added the list
  * Return: NULL if it failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *s;

	if (head == NULL)
		return (NULL);


	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);


	new->str = strdup(s);
	new->len = strlen(s);
	new->next = *head;
	*head = new;
	return (new);
}
