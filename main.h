#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct print - struct for printing
 * @type: type to print
 * @f: function to print
 */
typedef struct print
{
	char *type;
	int (*f)(va_list);
} print_t;

int print_address(va_list);
int print_S(va_list);
int print_HEX(va_list);
int print_hex(va_list);
int print_octal(va_list);
int print_unsigned(va_list);
int print_binary(va_list);
int print_decimal(va_list);
int print_int(va_list);
int print_percent(va_list);
int print_string(va_list);
int print_char(va_list);
int _putchar(char c);
int _printf(const char *format, ...);
int print_number(int n);
int print_number_binary(int n);
int print_rot13(char c);
#endif /* MAIN_H */
