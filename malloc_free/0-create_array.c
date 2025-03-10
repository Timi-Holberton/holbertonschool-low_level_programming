#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Entry point
 *@size : taille
 *@c : caractère dans tableau
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *tab = malloc(size * sizeof(char));

		if (tab == 0)
		{
			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
			tab[i] = c;
		}
		return (tab);
		free(tab);
		tab = NULL;
}
