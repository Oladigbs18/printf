#include "main.h"

#define BUFFER_SIZE 1024
#define SHORT 1
#define LONG 2

/**
 * handle_length - handles the length modifiers
 * @modifier: A pointer to a potential length modifier.
 * @index: An index counter for the original format string.
 *
 * Return: If a lenth modifier is matched - its corresponding value.
 *         Otherwise - 0.
 */
unsigned char handle_length(const char *format, char *index)
{
	if (*format == 'h')
	{
		(*index)++;
		return (SHORT);
	}

	else if (*format == 'l')
	{
		(*index)++;
		return (LONG);
	}

	return (0);
}
