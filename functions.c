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
