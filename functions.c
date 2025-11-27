#include "main.h"

/**
 * print_char - affiche un caractère
 * @args: liste des arguments
 * Return: nombre de caractères imprimés
 */
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - affiche une chaîne de caractères
 * @args: liste des arguments
 * Return: nombre de caractères imprimés
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_percent - affiche le caractère '%'
 * @args: liste des arguments (non utilisé)
 * Return: nombre de caractères imprimés
 */
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
