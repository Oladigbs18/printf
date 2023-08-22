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

int print_percent(va_list);
int print_string(va_list);
int print_char(va_list);
int _putchar(char c);
int _printf(const char *format, ...);

#endif /* MAIN_H */
