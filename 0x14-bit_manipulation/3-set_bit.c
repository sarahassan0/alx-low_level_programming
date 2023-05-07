/*
 * 0x14. C - Bit manipulation
 * task 3
 */


#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to the number to modify.
 * @index: index of the bit to set, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64) /* because an unsigned long integer is 64 bits in size */
		return (-1);

	*n |= (1 << index); /* another solution => *n |= (1 << index) */
	return (1);
}
