/*
 * 0x14. C - Bit manipulation
 * task 4
 */


#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to the number to modify.
 * @index: index of the bit to clear, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64) /* because an unsigned long integer is 64 bits in size */
		return (-1);

	*n ^= (1 << index);
	return (1);
}
