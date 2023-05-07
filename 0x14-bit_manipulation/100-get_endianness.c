/*
 * 0x14. C - Bit manipulation
 * task 6
 */


#include "main.h"
/**
 * get_endianness- a function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	int i = 1;
	char *c = (char *) &i;

	if (*c == 1)
		return (1);

	else
		return (0);
}
