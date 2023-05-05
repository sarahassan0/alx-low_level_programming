/*
 * 0x14. C - Bit manipulation
 * task 1
 * used recursion to avoid using loops
 * used & bitwise operator to get the reminder
 */


#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */

void print_binary(unsigned long int n)
{
	if (n > 1)             /*recursion's termination condition */
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
