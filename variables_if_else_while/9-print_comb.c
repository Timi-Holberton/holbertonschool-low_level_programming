#include <stdio.h>

/*
 * main - Point d'entrée du programme
 * Description: Ce programme affiche les chiffres de 0 à 9 séparés par
 * des virgules et des espaces.
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
    int nbre;

    /* Boucle pour afficher les chiffres de 0 à 9 */
    for (nbre = 48; nbre <= 57; nbre++)
    {
        putchar(nbre);  /* Affiche le chiffre courante */
        if (nbre != 57)
        {
            putchar(44);  /* Affiche la virgule */
            putchar(32);  /* Affiche l'espace */
        }
    }
    putchar('\n');  /* Retour à la ligne après la boucle */

    return (0);  /* Indique que le programme s'est terminé avec succès */
}
