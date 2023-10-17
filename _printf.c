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

/**
 * specifier_case - help function _printf to handle specifier cases.
 *
 * @c: char printed after %
 * @args: arguments
 *
 * Return: count
 */

int specifier_case(char c, va_list args)
{
	int count = 0;


	if (c == 'c')
	{
		count = _putchar(va_arg(args, int));
	}
	else if (c == '%')
	{
		count = _putchar(c);
	}
	else if (c == 's')
	{
		char *str = va_arg(args, char *);


		count += string_case(str);
	}
	else if (c == '\0')
	{
		count += _putchar(c);
	}
	else if (c == 'i' || c == 'd')
	{
		int num = va_arg(args, int);

		if (num < 0)
		{
			count++;
			count += number_len(num);
			number_case(num);
		}
		else
		{
			count += _putchar('%');
			count += _putchar(c);
		}
	va_end(args);
	return (count);
}
