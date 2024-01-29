#include "main.h"

/**
 * _printf - emulates the real printf
 * @format: format specifier
 * Return: bytes printed.
 */

int _printf(const char *format, ...)
{
	unsigned int i, byte_count, byte_print = 0;

	va_list pt;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(pt, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}

		else if (format[i] == '%' && format[i + 1] == 'c')
		{
		_putchar(va_arg(pt, int));
		i++;
		}
		else if (format[i] == 's')
		{
			byte_count = _puts(va_arg(pt, char *));
			i++;
			byte_print += (byte_count - 1);
		}
		else if (format[i] == '%')
		{
			_putchar('%');
		}
		byte_print++;
	}
	va_end(pt);
	return (byte_print);
}
