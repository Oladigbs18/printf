#include "main.h"

/**
 * print_char - prints a character
 * @list: list of arguments
 * Return: number of characters printed
 */
int print_char(va_list list)
{
	char c = va_arg(list, int);

	_putchar(c);
	return (1);
}
