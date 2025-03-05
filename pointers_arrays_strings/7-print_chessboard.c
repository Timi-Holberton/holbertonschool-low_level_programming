#include <stdio.h>
#include "main.h"

/**
 *  - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	char i, j;
	char c;
	char tab[8];
	(*a)[8] = &tab;
	c = (*a)[0];

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(c);
		}
	}
}

