#include "search_algos.h"

/**
 * linear_search - linear search alogrithm.
 * @array: array to search on.
 * @size: size of the array.
 * @value: value to be searched
 *
 * Return: index of the value, or -1.
 */

int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    if (!array || !size || !value)
        return (-1);
    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%li] = [%i]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}
