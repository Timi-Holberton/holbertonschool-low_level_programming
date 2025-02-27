#include <stdio.h>
#include "main.h"

/**
 * print_array - Entry point
 * @a : var
 * @n : var
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	n = 0;

	printf("%d", a[n]);

	for (n = 1; a[n] != '\0'; n++)
	{
		printf(", %d", a[n]);
	}
	printf("\n");
}
