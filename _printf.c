#include "main.h"

/**
 * _printf - affiche du texte formaté (simplifié)
 * @format: chaîne de format
 * Return: nombre total de caractères imprimés
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j, count = 0;

	format_t specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
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

			/* Si aucun spécificateur reconnu, on affiche tel quel */
			if (specifiers[j].spec == '\0')
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
