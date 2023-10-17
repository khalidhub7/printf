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
