#include <stdio.h>
#include "main.h"

/**
 * puts2 - Entry point
 * @str : var
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int i = 0;

	while (i[str] != '\0')
	{
		_putchar(i[str]);
		i += 2;
	}
	_putchar('\n');
}
