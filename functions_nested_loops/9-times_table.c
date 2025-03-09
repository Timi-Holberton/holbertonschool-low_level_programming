#include <stdio.h>
#include "main.h"

/*
 * times_table - Affiche la table de multiplication de 0 à 9
 *
 * Description: Cette fonction affiche la table de multiplication pour
 * les nombres de 0 à 9. Elle affiche chaque produit de manière formatée,
 * avec des virgules pour séparer les produits, et des espaces pour
 * s'assurer que les résultats sont alignés. Un saut de ligne est ajouté
 * après chaque ligne de la table.
 *
 * Return: Cette fonction ne retourne rien (void).
 */
void times_table(void)
{
    int multiple1, multiple2, table;  /* Déclaration des variables pour les multiplicateurs et le produit */

    /* Boucle pour parcourir les multiples de 0 à 9 (ligne de la table) */
    for (multiple1 = 0; multiple1 <= 9; multiple1++)
    {
        /* Boucle pour parcourir les multiplicateurs de 0 à 9 (colonne de la table) */
        for (multiple2 = 0; multiple2 <= 9; multiple2++)
        {
            /* Calcul du produit des deux multiples */
            table = multiple1 * multiple2;

            /* Si on est au début de chaque ligne (pour le produit 0), on affiche juste le chiffre */
            if (multiple2 == 0)
            {
                _putchar(table + '0');  /* Affiche le produit sous forme de caractère */
            }
            else
            {
                _putchar(44); /* Affiche la virgule pour séparer les produits */
                _putchar(32); /* Affiche un espace après la virgule pour l'alignement */

                /* Si le produit est supérieur ou égal à 10, afficher les deux chiffres */
                if (table >= 10)
                {
                    _putchar('0' + (table / 10));  /* Affiche le premier chiffre du produit */
                    _putchar('0' + (table % 10));  /* Affiche le deuxième chiffre du produit */
                }
                else
                {
                    _putchar(32); /* Ajoute un espace pour aligner les produits à une seule position */
                    _putchar('0' + (table % 10));  /* Affiche uniquement le dernier chiffre du produit */
                }
            }

        }
        _putchar('\n');  /* Ajoute un retour à la ligne à la fin de chaque ligne de la table */
    }
}
