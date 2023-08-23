#include "main.h"

/**
 * handle_characters - handle the following flag characters.
 * @characters: A pointer to a string of flag characters.
 * @index: An index counter for the original format string.
 *
 * Return: If flag characters are matched - a corresponding value.
 *         Otherwise - 0.
 */
unsigned char handle_characters(const char *characters, char *index)
{
	int i, j;
	unsigned char ret = 0;
	characters_t characters[] = {
		{'+', PLUS},
		{' ', SPACE},
		{'#', HASH},
		{'0', ZERO},
	};

	for (i = 0; characters[i]; i++)
	{
		for (j = 0; characters[j].characters != 0; j++)
		{
			if (characters[i] == characters[j].characters)
			{
				(*index)++;
				if (ret == 0)
					ret = characters[j].value;
				else
					ret |= characters[j].value;
				break;
			}
		}
		if (characters[j].value == 0)
			break;
	}

	return (ret);
}
