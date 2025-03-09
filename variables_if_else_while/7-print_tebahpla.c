#include <stdio.h>

/*
 * main - Point d'entrée du programme
 * Description: Ce programme affiche les lettres minuscules de 'z' à 'a' en ordre inverse.
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
    char i;

    /* Boucle pour afficher les lettres de 'z' à 'a' en ordre inverse */
    for (i = 'z'; i >= 'a'; i--)
    {
        putchar(i);  /* Affiche la lettre courante */
    }

    putchar('\n');  /* Affiche un retour à la ligne après la boucle */

    return (0);  /* Indique que le programme s'est terminé avec succès */
}
