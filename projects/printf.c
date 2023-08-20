#include "main.h"

/**
 * _printf - prints anything
 * @format: list of types of arguments passed to the function
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format != '\0')
	{
		format++;
		count += 1;
	}

	va_end(args);
	return (count);
}
