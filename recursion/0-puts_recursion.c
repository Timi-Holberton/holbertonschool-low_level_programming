#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s : string
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
