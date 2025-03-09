#include <stdio.h>

/*
 * main - Point d'entrée du programme
 * Description: Ce programme affiche toutes les lettres minuscules de 'a' à 'z',
 * à l'exception des lettres 'e' et 'q'.
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
    char alfaB;

    /* Boucle pour afficher toutes les lettres de 'a' à 'z' sauf 'e' et 'q' */
    for (alfaB = 'a'; alfaB <= 'z'; alfaB++)
    {
        /* Si la lettre n'est ni 'e' ni 'q', on l'affiche */
        if (alfaB != 'e' && alfaB != 'q')
        {
            putchar(alfaB);  /* Affiche la lettre courante */
        }
    }

    putchar('\n');  /* Affiche un retour à la ligne après la boucle */

    return (0);  /* Indique que le programme s'est terminé avec succès */
}
