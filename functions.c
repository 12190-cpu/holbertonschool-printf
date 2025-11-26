#include "main.h"

/**
 * print_char - displays a char
 * @args: list of args
 * Return: Always 1 char
 */
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);
	_putchar(c);
	return(1);
}

/**
 * print_str - displays a string
 * @args: list of args
 * Return: noumber of char displayed
 */
int print_str(va_list args)
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
 * print_perc - displays the % character
 * @args: list of args
 * Return: 1
 */
int print_perc(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
