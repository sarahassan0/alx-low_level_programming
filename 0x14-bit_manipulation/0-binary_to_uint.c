/*
 * 0x14. C - Bit manipulation
 * task 0
 */


#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 *
 * Return: converted number, or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, d = 0;

	if (!b)
	{
		return (0);
	}
	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		d <<= 1;
		if (b[i] == '1')
			d += 1;
	}
	return (d);
}
