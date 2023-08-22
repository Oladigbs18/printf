#include "main.h"

/**
 * start_printing - starts printing
 * @format: list of types of arguments passed to the function
 * @list: list of arguments
 * @count: number of characters printed
 */
void start_printing(char *format, va_list list, int *count)
{
	print_t print[] = {
		{"c", print_char}, {"s", print_string}, {"S", print_S},
		{"%", print_percent},
		{"d", print_int}, {"i", print_decimal},
		{"b", print_binary},
		{"u", print_unsigned}, {"o", print_octal},
		{"x", print_hex}, {"X", print_HEX},
		{NULL, NULL}
	};

	int i;

	for (i = 0; print[i].type != NULL; i++)
	{
		if (*format == print[i].type[0])
		{
			*count += print[i].f(list);
			break;
		}
	}

	if (print[i].type == NULL && *format != ' ')
	{
		_putchar('%');
		_putchar(*format);
		*count += 2;
	}
}

/**
 * _printf - prints anything
 * @format: list of types of arguments passed to the function
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list list;

	int count = 0;

	va_start(list, format);

	if (format == NULL)
		return (-1);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			start_printing((char *)format, list, &count);
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}

	va_end(list);

	return (count);
}
