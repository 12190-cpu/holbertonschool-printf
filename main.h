#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct format - structure pour lier un spécificateur à sa fonction
 * @spec: caractère du spécificateur (ex: 'c', 's', '%')
 * @func: pointeur vers la fonction correspondante
 */
typedef struct format
{
	char spec;
	int (*func)(va_list);
} format_t;

/* --- Fonctions principales --- */
int _printf(const char *format, ...);

/* --- Fonctions de conversion --- */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

/* --- Fonctions utilitaires --- */
int _putchar(char c);

#endif /* MAIN_H */
