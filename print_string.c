#include "main.h"

/**
 * print_string - prints a string
 * @list: list of arguments
 * Return: number of characters printed
 */
int print_string(va_list list)
{
	char *str = va_arg(list, char *);
	int i;

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}
