#include <stdio.h>
#include "main.h"

/**
 * puts2 - Affiche chaque caractère à une position paire dans la chaîne.
 * @str : chaîne de caractères à parcourir.
 *
 * Return: Toujours 0 (Succès).
 */
void puts2(char *str)
{
	int i;

	/* Parcourt la chaîne de caractères */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Si l'indice est pair, on affiche le caractère correspondant */
		if (i % 2 == 0)
		{
			_putchar(str[i]); /* Affiche le caractère */
		}
	}

	_putchar('\n'); /* Ajoute une nouvelle ligne après l'affichage */
}

/* Lexique :
   - Indice pair: Even index, un index divisible par 2 (0, 2, 4, ...).
   - Chaîne de caractères: String, une séquence de caractères.
   - Afficher: Print, afficher à l'écran un caractère ou une chaîne.

Notions de base :
   - Boucle for: Utilisée pour parcourir chaque caractère de la chaîne.
   - Condition: Vérifie si l'indice est pair (i % 2 == 0) pour décider d'afficher le caractère.
   - Fonction _putchar: Permet d'afficher un caractère sur la sortie standard (console).
*/
