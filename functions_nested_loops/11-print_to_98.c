#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 * @n : valeur de Hol
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
			printf("%d, ", n++);
	}

	else
	{
		while (n > 98)
			printf("%d, ", n--);
	}
	printf("%d\n", n);
}
