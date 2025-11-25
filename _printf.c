#include <stdarg.h>
#include <unistd.h>
#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;
	char c;
	char *str;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == 'c')
		{
			c = (char)va_arg(args,int);
			write(1, &c, 1);
			count++;
		}

	va_ends(args);
	return (count);
}
