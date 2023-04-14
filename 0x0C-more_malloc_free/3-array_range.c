#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the minimum value of the array
 * @max: the maximum value of the array
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
	{
	return (NULL);
	}

	for (i = 0; i <= max - min; i++)
	{
	ptr[i] = min + i;
	}

	return (ptr);
}

