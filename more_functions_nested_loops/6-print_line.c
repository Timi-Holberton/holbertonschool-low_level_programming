#include <stdio.h>
#include "main.h"

/**
 * print_line - Entry point
 * @n : var
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int b;

	if (n <= 0)
		_putchar('\n');

	else

		for (b = 1; b <= n; b++)
		{
		_putchar(95);

		}

	_putchar('\n');
}
