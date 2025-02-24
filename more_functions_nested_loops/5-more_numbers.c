#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		int j;
		char tableau[] = "01234567891011121314";

		for (j = 0; j <= 19; j++)
		{
			_putchar(tableau[j]);

		}
		_putchar('\n');
	}
}
