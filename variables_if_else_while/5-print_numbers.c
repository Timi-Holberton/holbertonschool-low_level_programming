#include <stdio.h>

/*
 * main - Point d'entrée du programme
 * Description: Ce programme affiche les chiffres de 0 à 9, puis imprime un retour à la ligne.
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
    int i;

    /* Boucle pour afficher les chiffres de 0 à 9 */
    for (i = 0; i <= 9; i++)
    {
        printf("%d", i);  /* Affiche le chiffre courant */
    }

    printf("\n");  /* Affiche un retour à la ligne après la boucle */

    return (0);  /* Indique que le programme s'est terminé avec succès */
}
