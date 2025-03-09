#include <stdio.h>

/*
 * main - Point d'entrée du programme
 * Description: Ce programme affiche toutes les lettres minuscules de 'a' à 'z'
 * à l'aide de la fonction putchar, puis imprime un retour à la ligne.
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
    char i;

    /* Boucle pour parcourir toutes les lettres de 'a' à 'z' */
    for (i = 'a'; i <= 'z'; i++)
        putchar(i);  /* Affiche chaque lettre */

    putchar('\n');  /* Affiche un retour à la ligne après la boucle */

    return (0);  /* Indique que le programme s'est terminé avec succès */
}
