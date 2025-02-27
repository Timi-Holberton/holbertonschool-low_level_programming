#include <stdio.h>
#include "main.h"

/**
 * print_array - Entry point
 * @a : var
 * @n : var
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	int i;

       	printf("%d", a[0]);

	for (i = 1; i < n; i++)
	{
		if(i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
