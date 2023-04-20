#include "variadic_functions.h"

/**
 * print_strings - Prints strings passed to the function separed by separators
 * @separator: A string that is used to separate strings
 * @n: number of unnamed parameters
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	char *str;
	unsigned int i;
	va_list ap;

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		(str != NULL) ? printf("%s", str) : printf("(nil)")

		if (i != n - 1 && seprator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

