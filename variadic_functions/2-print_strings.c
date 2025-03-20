#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - imprime un texte avec séparateur
 * @separator: string pour séparer nombre
 * @n: le nombre d'entier dans la fonctions
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *texte;
	va_list argument;

	va_start(argument, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		texte = va_arg(argument, char*);

		if (texte == NULL)
		{
			printf("(nil)");
		}
		printf("%s", texte);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(argument);
}
