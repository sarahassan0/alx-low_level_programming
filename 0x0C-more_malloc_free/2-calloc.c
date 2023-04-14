#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array of elements and sets it to zero
 * @nmemb: The number of elements to allocate
 * @size: The size of each element
 *
 * Return: If allocation is successful, returns a pointer to the allocated memory,
 *         otherwise, returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}

