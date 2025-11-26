#include "main.h"
#include <stdio.h>

int main(void)
{
	int len;

	len = _printf("Salut %s !\n", "le monde");
	_printf("Caractère : %c\n", 'A');
	_printf("Pourcentage : %%\n");
	printf("=> %d caractères affichés\n", len);

	return (0);
}
