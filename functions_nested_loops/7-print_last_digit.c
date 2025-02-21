#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Entry point
 * @nbre : nombre @last_digit : print
 * Return: Always 0 (Success)
 */

int print_last_digit(int nbre)
{
	int last_digit = nbre % 10;

	if (last_digit < 0)
		last_digit *= -1;

	 _putchar(last_digit + '0');

	return (last_digit);
}
