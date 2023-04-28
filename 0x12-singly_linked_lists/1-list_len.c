#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check the code for Holberton School students.
 * @h: name of the list.
 *
 * Return: the number of nodes.
 */

size_t list_len(const list_t *h)
{
	int nodes_num = 0;

	while (h)
	{
		nodes_num++;
		h = h->next;
	}
	return (nodes_num);
}
