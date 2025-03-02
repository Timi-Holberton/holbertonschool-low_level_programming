#include "main.h"
#include <stdio.h>

/**
 * string_toupper - check the code
 * @tab : tableau de char
 * Return: Char
 */

char *string_toupper(char *tab)
{
	int i = '0';
/* tant que i n'est pas = à \0 i++*/
	for (i = 0; tab[i] != '\0'; i++)
	{ /* si tab est ecompreis entre a et z, soustraire 32 = ASCII majuscules */
		if ((tab[i] >= 97) && (tab[i] <= 122))
		{
			tab[i] = tab[i] - 32;
		}
	}
		return (tab);
}
