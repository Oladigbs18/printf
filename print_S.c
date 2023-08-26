#include "main.h"

/**
 * print_S - prints a string and non-printable characters
 * @args: the va_list with the string to print as it's next element
 * Return: the number of characters printed
 */
int print_S(va_list args)
{
	char *str = va_arg(args, char *);
	int chars_printed = 0;

	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_putchar((*str / 16) < 10 ? (*str / 16) + '0' : (*str / 16) + 'A' - 10);
			_putchar((*str % 16) < 10 ? (*str % 16) + '0' : (*str % 16) + 'A' - 10);
			chars_printed += 4;
		}
		else
		{
			_putchar(*str);
			chars_printed++;
		}
		str++;
	}
	return (chars_printed);
}
