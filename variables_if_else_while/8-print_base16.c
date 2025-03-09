#include <stdio.h>

/*
 * main - Point d'entrée du programme
 * Description: Ce programme affiche les chiffres hexadécimaux de 0 à f.
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	char hexa[] = "0123456789abcdef";  /* Tableau contenant les caractères hexadécimaux */
	int i;

	/* Boucle pour afficher les caractères hexadécimaux de '0' à 'f' */
	for (i = 0; i < 16; i++)
	{
		putchar(hexa[i]);  /* Affiche le caractère hexadécimal à l'index i */
	}

	putchar('\n');  /* Affiche un retour à la ligne après la boucle */

	return (0);  /* Indique que le programme s'est terminé avec succès */
}
