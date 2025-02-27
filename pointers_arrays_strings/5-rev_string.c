#include <stdio.h>
#include "main.h"

/**
 * rev_string - Entry point
 * @s : tableau
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int i, j;
	int echange;


	for (j = 0; s[j] != '\0'; j++)
	{
	}
	j--;

	for (i = 0; i < j; i++, j--)
	{
		echange = s[i]; /* intervertir caracteres voir exercice precedent*/
		s[i] = s[j];
		s[j] = echange;
	}
}
