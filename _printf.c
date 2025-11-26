#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - displays an output
 * @format: %c, %s, %%
 * Return: number of char
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j, count = 0;
	fmt_t specifiers[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_perc},
		{0, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break;

			j = 0;
			while (specifiers[j].spec)
			{
				if (format[i] == specifiers[j].spec)
				{
					count += specifiers[j].func(args);
					break;
				}
			j++;
		}

		if (specifiers[j].spec == 0)
		{
			_putchar('%');
			_putchar(format[i]);
			count += 2;
		}
	
	}
		else
		{
			_putchar(format[i]);
			count++;
		}
	i++;
	}

	va_end(args);
	return (count);
}
