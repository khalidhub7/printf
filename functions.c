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
 * Return: count
 */

int number_case(int numb)

{
	int count = 0;

	if (numb < 0)
	{
		count += _putchar('-');
		if (numb == -2147483648)
		{
			count += _putchar('2');
			numb %= 1000000000;
		}
		count += number_case(-numb);
	}
	else if (numb >= 0 && numb <= 9)
	{
		count += _putchar(numb + '0');
	}
	else
	{
		count += number_case(numb / 10);
		count += _putchar((numb % 10) + '0');
	}
	return (count);
}
/**
 * number_len - function print lenght of a number.
 *
 * @number: the number to print.
 *
 * Return: lenght of number.
 *
*/
