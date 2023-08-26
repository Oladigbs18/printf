#include "main.h"

/**
 * print_octal - prints an octal
 * @args: the va_list with the octal to print as it's next element
 * Return: the number of characters printed
 */
int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int num, last = n % 8, digit, exp = 1;
	int chars_printed = 0;

	n /= 8, num = n;
	if (last < 0)
	{
		_putchar('-');
		chars_printed++;
		num = -num, last = -last;
	}
	if (num > 0)
	{
		while (num / exp > 7)
			exp *= 8;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			chars_printed++;
			num -= (digit * exp);
			exp /= 8;
		}
	}
	_putchar(last + '0');
	chars_printed++;
	return (chars_printed);
}
