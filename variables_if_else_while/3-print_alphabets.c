#include <stdio.h>

/*
 * main - Point d'entrée du programme
 * Description: Ce programme affiche toutes les lettres minuscules de 'a' à 'z'
 * suivies de toutes les lettres majuscules de 'A' à 'Z', puis imprime un retour à la ligne.
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
    char i;
    char j;

    /* Boucle pour afficher toutes les lettres minuscules de 'a' à 'z' */
    for (i = 'a'; i <= 'z'; i++)
        putchar(i);  /* Affiche chaque lettre minuscule */

    /* Boucle pour afficher toutes les lettres majuscules de 'A' à 'Z' */
    for (j = 'A'; j <= 'Z'; j++)
        putchar(j);  /* Affiche chaque lettre majuscule */

    putchar('\n');  /* Affiche un retour à la ligne après les lettres */

    return (0);  /* Indique que le programme s'est terminé avec succès */
}
