#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int specifier_case(char c, va_list args);
int string_case(char *str);
int number_case(int numb);
/*int number_len(int number);*/

#endif
