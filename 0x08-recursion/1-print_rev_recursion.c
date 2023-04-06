#include "main.h"

/**
  * _print_rev_recursion - print a string in reverse
  * @s: string
  */

void print_rev_recursion(char *s)
{
	if (!*s == '\0')
	{
		print_rev_recursion(s + 1)
		_putchar(*s)
	}
}
