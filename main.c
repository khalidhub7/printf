#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
    int len;

    len = _printf("Let's try to printf a simple sentence.\n");

        _printf("Percent:[%%]\n");
        _printf("Character:[%c]\n", 'H');
        _printf("String:[%s]\n", "I am a string !");
        _printf("Unknown:[%r]\n");
        _printf("%ok %r %% \n");
        _printf("Length:[%d, %i]\n", len, len);
        _printf("Negative:[%d]\n", -762534);
        _printf("Len:[%d]\n", len);
        _printf("%r  \n");
        _printf("_printf %% \n");
        _printf("%%  \n");
        return (0);
}
