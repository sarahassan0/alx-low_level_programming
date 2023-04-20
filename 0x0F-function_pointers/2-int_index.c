#include "function_pointers.h"

/**
  * int_index - Searches for an integer.
  * @array: Pointer to the array to search.
  * @size: Number of elements in the array.
  * @cmp: Pointer to the function that compares values.
  *
  * Return: Index of the first element if cmp function does not return 0,
  *         or -1 if no element matches or if size <= 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}

	return (-1);
}
