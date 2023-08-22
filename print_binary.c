#include "main.h"

/**
 * print_binary - prints a binary
 * @args: list of arguments
 * Return: number of characters printed
 */
int print_binary(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}
	count += print_number_binary(n);
	return (count);
}

/**
 * print_number_binary - prints a number in binary
 * @n: number to print
 * Return: number of characters printed
 */
int print_number_binary(int n)
{
	int count = 0;

	if (n / 2)
		count += print_number_binary(n / 2);
	_putchar(n % 2 + '0');
	count++;
	return (count);
}
