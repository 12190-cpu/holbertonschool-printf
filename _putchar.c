#include <unistd.h>

/**
 * _putchar - writes a char on stdout
 * @c: char to display
 * Return: 1 if success, -1 if error
 */
int _putchar(char c)

{
	return (write(1, &c, 1));
}
