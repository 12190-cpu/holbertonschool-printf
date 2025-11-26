#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

typedef struct format_specifier
{
	char spec;
	int (*func)(va_list);
} fmt_t;

int _printf(const char *format, ...);

int print_char(va_list args);
int print_str(va_list args);
int print_perc(va_list args);

int _putchar(char c);

#endif 
