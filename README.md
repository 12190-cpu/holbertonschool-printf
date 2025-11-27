# PRINTF PROJECT

---

## Description

The printf project reproduces how the "printf" function works in C. Our 'printf' displays simple texts to the stdout with specifiers like %c, %s, %%...

We used for this project like :
	variadic functions (to use different variables or format)
	function pointers (to use functions easily)
	structures (to manage different formats)


## Compile commands

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o printf


## Specifiers 

%c - char - _printf ("%c", 'f'); - f
%s - string - _printf ("%s", "bye"); - bye
%% - modulo - _printf ("%%"); - %
%d/%i - int - _printf ("%d", 555); - 555

## Requirements

	- All files must be compiled on Ubuntu 20.04 with gcc...
	- Not allowed to use global variables
	- No more than 5 functions per file
	- Prototypes must be included in header file
	- Not allowed to use 'printf' or 'puts' function


## Examples

Example
	#include "main.h"

	int main(void)
	{
    		_printf("Hi %s !\n", "Mahamadou");
    		_printf("Give me an : %c\n", 'A');
    		_printf("Number : %d\n", 555)
		return (0);
	}

Stdout
	Hi Mahamadou
	Give me an A
	Number : 555


## Man page

man_3-printf


## Testing

Gcc to test : gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o printf
	      ./ printf

Valgrind to check memory leaks : valgrind --leak-check=full ./test


## Flowchart

<img width="382" height="621" alt="Capture d’écran 2025-11-28 à 00 38 20" src="https://github.com/user-attachments/assets/fc3624d5-e3ea-4754-a974-262d98558e29" />

## Authors

Farid GHAIB @12190-cpu
Mahamadou DIARRA @Mahamadou19-75

