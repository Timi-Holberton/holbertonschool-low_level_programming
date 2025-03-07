#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - check the code
 * @a : tableau 2
 * @size : taille
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	char i; /* ligne */
	char j; /* colonne*/

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{

			printf("%d\n", a[i][j]);
		}
	}
}
