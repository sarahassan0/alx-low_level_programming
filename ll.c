#include "main.h"

/**
 * get_precision - prints precision
 * @format: format string
 * @args: va_list
 *
 * Return: number of characters printed
 */

int get_precision(char *format, va_list *args)
einclude <unistd.h>
{
	int prntd = 0;

	switch (*format)
	{
		case 'c':
			prntd = prnt_c(args);
			break;
		case 's':
			prntd = prnt_str(args);
			break;
		case 'd':
		case 'i':
			prntd = prnt_num(args);
			break;
		case '%':
			prntd = _putchar('%');
			break;
		default:
			prntd = _putchar(*format);
			break;
	}

	return (prntd);
}

