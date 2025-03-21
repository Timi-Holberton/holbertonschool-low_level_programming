#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - check the code
 * @format: contient les différents types
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	int i = 0, j;

	va_list args;

	format1 type[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(args, format);

	while (format[i] && format)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == type[j].symbol)
			{
				printf("%s", separator);
				type[j].print_function(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
