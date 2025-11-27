#include "main.h"

/**
 * _printf - displays simple text
 * @format: format of the specifier
 * Return: total of characters printed
 */
int _printf(const char *format, ...)
{
	int i, printed_chars = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break;
			printed_chars += handle_print(format, args, &i);
		}
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
	}

	va_end(args);
	return (printed_chars);
}
