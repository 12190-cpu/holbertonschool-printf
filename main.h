#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct fmt - associates a spec to his function
 * @fmt: the char of the  format (ex: 'c', 's', '%')
 * @fn: pointer to the corresponding function
 */
typedef struct fmt
{
	char fmt;
	int (*fn)(va_list);
} fmt_t;

int _printf(const char *format, ...);
int handle_print(const char *format, va_list args, int *i);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int _putchar(char c);
int print_int(va_list args);
int print_number(long n);

#endif
