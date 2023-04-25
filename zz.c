#include "main.h"

/**
 * prnt_c - Prints a character
 *
 * @args: A va_list containing the character to print
 *
 * Return: The number of characters printed
 */

int prnt_c(va_list *args)
{
	int prntd = 0;

	prntd += _putchar(va_arg(*args, int));

	return (prntd);
}

