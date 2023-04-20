#include "variadic_functions.h"

/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int printed;
	char *s;
	va_list args;

	va_start(args, format);
	while ((c = *(format++)) != '\0')
	{
		switch (c)
		{
			case 'c';
			    printf("%c", va_arg(args, int));
			    printed = 1;
			break;
			case 'i':
			    printf("%d", va_arg(args, int));
			    printed = 1;
			break;
			case 'f':
			    printf("%f", va_arg(args, double));
			    printed = 1;
			break;
			case 's':
			    s = va_arg(args, char *)
			    (s == NULL) ? printf("(nil)") : printf("%s", s);
			    printed = l;
			break;
			default:
			break;
		}
		if (*(format) != '\0' && printed)
		{
			printf(", ");
			printed = 0;
		}
	}
	printf("\n");
	va_end(args);
}
