#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: format of argument to be printed
 * Return: numbers of characters
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	if (format == NULL)
		return(-1);

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
		}

		format++;
	}
	return (count);
}
