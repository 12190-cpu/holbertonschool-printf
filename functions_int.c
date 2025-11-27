#include "main.h"

/**
 * print_number - Helper function to print an integer using recursion
 * @n: The integer to print
 * Return: Number of characters printed
 */
int print_number(long n)
{
	int count = 0;
	char digit;

	if (n / 10)
	count += print_number(n / 10);

	digit = (n % 10) + '0';
	write(1, &digit, 1);
	return (count + 1);
}

/**
 * print_int - Prints an integer for %d or %i
 * @args: Argument list
 * Return: Number of characters printed*/
int print_int(va_list args)
{
	long n = va_arg(args, int);
	int count = 0;

	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		n = -n;
	}

	count += print_number(n);
	return (count);
}
