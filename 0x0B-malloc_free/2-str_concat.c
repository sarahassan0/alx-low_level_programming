#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, len;
	char *ptr;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		while (s1[len1])
			len1++;
	}

	if (s2 != NULL)
	{
		while (s2[i++])
			len2++;
	}

	len = len1 + len2;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		ptr[i] = s2[j];

	return (ptr);
}
