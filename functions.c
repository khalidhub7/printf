#include"main.h"

/**
 * _putchar - print a char.
 *
 * @c: char to print
 * Return: write 1 success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * string_case - function count the number of char in string.
 *
 * @str: string
 *
 * Return: count of characters
 */

int string_case(char *str)
{
	int count = 0;


	if (str == NULL)
	{
		string_case("(null)");
		count = count + 6;
		return (count);
	}
	while (str[count])
	{
		_putchar(str[count]);
		count++;
	}
	return (count);
}
