#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - check the code
 * @format: contient les différents types
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	char *s; /* string */
	float f; /* float */
	int c, i, k = 0, j = 0; /* intiger - compteur */
	va_list argument;

	va_start(argument, format);
	while (format[j] != '\0')
	{
		if (format[j] == 'c')
		{
			c = va_arg(argument, int);
			printf("%c", c);
			printf(", ");
		}
		else if (format[j] == 'i')
		{
			i = va_arg(argument, int);
			printf("%d", i);
			printf(", ");
		}
		else if (format[j] == 'f')
		{
			f = va_arg(argument, double);
			printf("%f", f);
			printf(", ");
		}
		else if (format[j] == 's')
		{
			s = va_arg(argument, char*);
			if (s[k] != '\0' && s != NULL)
				printf("%s", s);
			else if (s == NULL)
				printf("nil");
		}
		k++;
		j++;
	}
	printf("\n");
	va_end(argument);
}
