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
		do {
			printf("%d, ", n);
			n++;
		} while (n <= 98);
	}
	else if (n >= 98)
	{
		do {
			printf("%d, ", n);
			n--;
		} while (n >= 98);

	}
	else
	{
		printf("%d, ", n);
	}
	printf("\n");
}
