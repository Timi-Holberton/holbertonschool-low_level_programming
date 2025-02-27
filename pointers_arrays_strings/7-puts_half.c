#include <stdio.h>
#include "main.h"

/**
 * puts_half  - Entry point
 * @str : var
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int i, k;

	for (i = 0; str[i] != '\0'; i++)
	{
		k = (i / 2);
		while (k != '\0')
		{
			k++;
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
