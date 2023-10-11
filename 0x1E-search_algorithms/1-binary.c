#include "search_algos.h"

/**
 * binary_search - binary search alogrithm.
 * @array: array to search on.
 * @size: size of the array.
 * @value: value to be searched.
 *
 * Return: index of the value, or -1.
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid = size - 1 / 2;

	if (!array || !size || !value)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;
		print(array, low, high);
		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}

/**
 * print - print an array.
 * @array: array to search on.
 * @low: first index in array.
 * @high: last index in array.
 *
 * Return: index of the value, or -1.
 */
void print(int *array, int low, int high)
{
	int i = 0;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%i ", array[i]);
		if (i != high)
			printf(", ");
	}
	printf("\n");
}
