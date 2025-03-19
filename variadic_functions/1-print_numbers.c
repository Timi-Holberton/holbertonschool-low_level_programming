#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - imprime les nombre séparér par des virgule
 * @separator: string pour séparer nombre
 * @n: le nombre d'entier dans la fonctions
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int nbre;
	va_list argument;

	va_start(argument, n);

	for (i = 0; i < n; i++)
	{
		nbre = va_arg(argument, int);

		printf("%u", nbre);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(argument);
}
