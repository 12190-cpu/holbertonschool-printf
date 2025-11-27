#include "main.h"

/**
 * print_int - affiche un entier (%d ou %i)
 * @args: liste des arguments
 * Return: nombre de caractères imprimés
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	unsigned int num;
	int count = 0;
	char c;

	/* Gestion du signe négatif */
	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -n;  /* on convertit en positif */
	}
	else
	{
		num = n;
	}

	/* Affichage récursif du nombre */
	if (num / 10)
		count += print_int_num(num / 10); /* fonction auxiliaire */

	c = (num % 10) + '0';
	_putchar(c);
	count++;

	return (count);
}

/**
 * print_int_num - fonction auxiliaire récursive pour print_int
 * @n: nombre à afficher
 * Return: nombre de caractères imprimés
 */
int print_int_num(unsigned int n)
{
	int count = 0;
	char c;

	if (n / 10)
		count += print_int_num(n / 10);

	c = (n % 10) + '0';
	_putchar(c);
	count++;

	return (count);
}
