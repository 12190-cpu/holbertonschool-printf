#include "main.h"

/**
 * handle_print - manage the specifiers
 * @format: format chain
 * @args: list of args
 * @i: pointer to index in format
 *
 * Return: characters printed
 */
int handle_print(const char *format, va_list args, int *i)
{
	int j;
	int count = 0;

	fmt_t formats[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};

	for (j = 0; formats[j].fmt != '\0'; j++)
	{
		if (format[*i] == formats[j].fmt)
		{
			count += formats[j].fn(args);
			return (count);
		}
	}

	_putchar('%');
	_putchar(format[*i]);
	return (2);
}
