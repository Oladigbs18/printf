#include "main.h"

/**
 * print_int - prints an integer
 * @args: list of arguments
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}
	count += print_number(n);
	return (count);
}

/**
 * print_decimal - prints a decimal
 * @args: list of arguments
 * Return: number of characters printed
 */
int print_decimal(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}
	count += print_number(n);
	return (count);
}

/**
 * print_number - prints a number
 * @n: number to print
 * Return: number of characters printed
 */
int print_number(int n)
{
	int count = 0;

	if (n / 10)
		count += print_number(n / 10);
	_putchar(n % 10 + '0');
	count++;
	return (count);
}
