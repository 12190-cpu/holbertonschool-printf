#include "main.h"
#include <stdio.h>

int main(void)
{
	_printf("Chaîne : %s\n", "Holberton");
	_printf("Caractère : %c\n", 'H');
	_printf("Pourcentage : %%\n");
	_printf("Entier positif : %d\n", 12345);
	_printf("Entier négatif : %i\n", -9876);
	_printf("Inconnu : %r\n");
	return (0);
}
