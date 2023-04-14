#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string to be concatenated
 * @s2: The second string to be concatenated
 * @n: The maximum number of bytes to be concatenated from s2
 *
 * Return: The concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len, len1 = 0;
	int len2 = 0;
	char *ptr;

	if (s1 != NULL)
	{
		while (s1[len1])
			len1++;
	}
	else
		s1 = "";

	if (s2 != NULL)
	{
		while (s2[len])
			len2++;
	}
	else
		s2 = "";
	if (n >= len2)
	{
		n = len2;
	}
	len = len1 + n + 1;
	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}

