#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */


char *_strdup(char *str)
{

	char *ptr;
	int i, size = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size])
	{
		size++;
	}
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
	{

		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
