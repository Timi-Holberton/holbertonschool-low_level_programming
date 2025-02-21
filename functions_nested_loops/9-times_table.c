#include <stdio.h>
#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int multiple1, multiple2, table;

	for (multiple1 = 0; multiple1 <= 9; multiple1++)
		for (multiple2 = 0; multiple2 <= 9; multiple2++)
		{
			table = multiple1*multiple2;
			_putchar(table);
			_putchar(32);
			_putchar('\n');
		}
}
