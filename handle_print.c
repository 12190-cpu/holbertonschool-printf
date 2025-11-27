#include "main.h"

/**
 * handle_print - gère les spécificateurs de format
 * @format: chaîne de format complète
 * @args: liste des arguments
 * @i: pointeur vers l’index courant dans format
 *
 * Return: nombre de caractères imprimés
 */
int handle_print(const char *format, va_list args, int *i)
{
	int j;
	int count = 0;

	fmt_t formats[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
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

	/* Si spécificateur inconnu : afficher littéralement */
	_putchar('%');
	_putchar(format[*i]);
	return (2);
}
