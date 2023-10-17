#include"main.h"

/**
 * _printf - print the format.
 * 
 * @format: string
 * 
 * Return: number of char printed
 */

int _printf(const char *format, ...)
{
	int counter = 0;
	va_list args;

	va_start(args, format);

	if (!format[0] || !format) 
	{
		return (-1);
	}
	if (format[0] == '%' && format[1] == ' ')
	{
		return (-1);
	}
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			counter += specifier_case(*format, args);
			format++;
		}
		else
		{
			counter += _putchar(*format);
			format++;
		}
	}
	va_end(args);
	return (counter);
}
