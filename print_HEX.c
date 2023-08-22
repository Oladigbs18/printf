#include "main.h"

/**
 * print_HEX - prints a hexadecimal
 * @args: the va_list with the hexadecimal to print as it's next element
 * Return: the number of characters printed
 */
int print_HEX(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int num, last = n % 16, digit, exp = 1;
	int chars_printed = 0;

	n /= 16, num = n;
	if (last < 0)
	{
		_putchar('-');
		chars_printed++;
		num = -num, last = -last;
	}
	if (num > 0)
	{
		while (num / exp > 15)
			exp *= 16;
		while (exp > 0)
		{
			digit = num / exp;
			if (digit < 10)
				_putchar(digit + '0');
			else
				_putchar(digit + 'A' - 10);
			chars_printed++;
			num -= (digit * exp);
			exp /= 16;
		}
	}
	if (last < 10)
		_putchar(last + '0');
	else
		_putchar(last + 'A' - 10);
	chars_printed++;
	return (chars_printed);
}
