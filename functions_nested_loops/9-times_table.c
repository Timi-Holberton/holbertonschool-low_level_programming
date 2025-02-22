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
	{
		_putchar('\n');

		for (multiple2 = 0; multiple2 <= 9; multiple2++)
		{
			table = multiple1 * multiple2;
			if (table >= 10)
			{
				_putchar('0' + (table / 10));
				_putchar('0' + (table % 10));
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar('0' + (table % 10));
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
		}
	}
}
