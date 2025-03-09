#include <stdio.h>

/*
 * main - Point d'entrée du programme
 * Description: Ce programme affiche les chiffres de 0 à 9 en utilisant les valeurs ASCII.
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
    char i;

    /* Boucle pour afficher les chiffres de 0 à 9 en utilisant leur code ASCII */
    for (i = 48; i <= 57; i++)
    {
        putchar(i);  /* Affiche le caractère correspondant à l'ASCII de 'i' */
    }

    putchar('\n');  /* Affiche un retour à la ligne après la boucle */

    return (0);  /* Indique que le programme s'est terminé avec succès */
}
