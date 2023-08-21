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
		if (*format == '%')
		{
			const char *s;

			format++;
			switch (*format)
			{
				case 'c':
					count += 1;
					_putchar(va_arg(args, int));
					break;
				case 's':
					count += 1;
					s = va_arg(args, char *);
					if (s == NULL)
					s = "(null)";
					while (*s != '\0')
					{
						_putchar(*s);
						s++;
					}
					break;
				case '%':
					count += 1;
					_putchar('%');
					break;
				default:
					_putchar('%');
					_putchar(*format);
					count += 2;
					break;
			}

		}
		else
		{
			_putchar(*format);
			count += 1;
		}
		format++;
	}

	va_end(args);
	return (count);
}
