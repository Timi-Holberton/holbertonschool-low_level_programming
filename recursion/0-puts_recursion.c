#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s : string
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
