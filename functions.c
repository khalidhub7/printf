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

/**
 * number_case - function prints a number
 *
 * @numb: number
 *
 * Return: print the number
 */

int number_case(int numb)
{
	if (numb == -214783648)
	{
		_putchar('-');
		_putchar('2');
		number_case(14783648);
		return (1);
	}
	else if (numb < 0)
	{
		_putchar('-');
		numb = -numb;
	}
	if (numb < 10)
	{
		_putchar(numb + '0');
	}
	else if (numb >= 10)
	{
		number_case(numb / 10);
		number_case(numb % 10);
	}
	return (1);
}

/**
 * number_len - function print lenght of a number.
 *
 * @number: the number to print.
 *
 * Return: lenght of number.
 */

int number_len(int number)
{
	if (number == 0)
	{
		return (0);
	}
	else
	{
		return (1 + number_len(number / 10));
	}
}
