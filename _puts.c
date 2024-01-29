#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 * @s: string to print
 * Return: number of printed characters
 */

int _puts(char *s)
{
	int byte_count = 0;

	if (s)
	{
		for (byte_count = 0; s[byte_count] != '\0'; byte_count++)
		{
			_putchar(s[byte_count]);
		}
	}
	return (byte_count);
}

