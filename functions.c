#include "main.h"

/**
 * print_char - displays a character
 * @args: list of args
 * Return: number of character printed
 */
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - dispays a string
 * @args: list of args
 * Return: noumber of character printed
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
 * print_percent - displays the '%' character
 * @args: list of unused args
 * Return: number of character printed
 */
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
