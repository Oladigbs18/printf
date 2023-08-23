#include "main.h"

/**
 * print_address - prints a pointer address
 * @args: the va_list with the pointer address to print as it's next element
 * Return: the number of characters printed
 */
int print_address(va_list args)
{
	unsigned long int n = va_arg(args, unsigned long int);
	unsigned long int num = n;
	int chars_printed = 0;
	int digit_count, i, j;
	char *hex;

	_putchar('0');
	_putchar('x');
	chars_printed += 2;

	digit_count = 0;
	if (num == 0)
	{
		digit_count = 1;
	}
	else
	{
		while (num > 0)
		{
			num /= 16;
			digit_count++;
		}
	}

	hex = malloc(sizeof(char) * (digit_count + 1));
	if (hex == NULL)
	{
		free(hex);
		return (-1);
	}

	i = 0;
	while (n > 0)
	{
		int last = n % 16;
		if (last < 10)
			hex[i] = last + '0';
		else
			hex[i] = last + 'a' - 10;
		n /= 16;
		i++;
	}
	hex[i] = '\0';

	j = i - 1;
	while (j >= 0)
	{
		_putchar(hex[j]);
		chars_printed++;
		j--;
	}

	free(hex);
	return (chars_printed);
}
