#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
    size_t nodes_count = 0;

    while (h != NULL)
    {
        h = h->next;
        nodes_count++;
    }
    return (nodes_count);
}
