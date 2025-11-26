#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct fmt - Associe un spécificateur à sa fonction
 * @fmt: le caractère du format (ex: 'c', 's', '%')
 * @fn: pointeur vers la fonction correspondante
 */
typedef struct fmt
{
	char fmt;
	int (*fn)(va_list);
} fmt_t;

/* Prototype principal */
int _printf(const char *format, ...);

/* Handler */
int handle_print(const char *format, va_list args, int *i);

/* Fonctions d’affichage */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

/* Utilitaire */
int _putchar(char c);

#endif /* MAIN_H */
