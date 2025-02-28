#include <stdio.h>
#include "main.h"

/**
 * puts_half  - Entry point
 * @str : var
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{

	int longueur, i, moit;

	for (longueur = 0; str[longueur] != '\0'; longueur++)
	{
		moit = longueur / 2;
	}
	for (i = (moit + 1); i <= longueur; i++)
		if (moit < i)
		{
			_putchar(str[i]);
		}

	_putchar('\n');
}
