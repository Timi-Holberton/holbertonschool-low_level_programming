#include <stdio.h>
#include "main.h"

/*
 * jack_bauer - Affiche toutes les heures et minutes d'une journée
 *
 * Description: Cette fonction affiche toutes les combinaisons possibles
 * d'heures et de minutes, de 00:00 à 23:59, avec un format "HH:MM".
 * Les boucles imbriquées permettent de parcourir toutes les heures
 * (de 0 à 23) et toutes les minutes (de 0 à 59). Chaque heure et chaque
 * minute est affichée en utilisant les caractères ASCII correspondants.
 *
 * Return: Cette fonction ne retourne rien (void).
 */
void jack_bauer(void)
{
    int minute, heure;  /* Déclaration des variables pour l'heure et la minute */

    /* Boucle pour parcourir toutes les heures de 00 à 23 */
    for (heure = 0; heure <= 23; heure++)
    {
        /* Boucle pour parcourir toutes les minutes de 00 à 59 */
        for (minute = 0; minute <= 59; minute++)
        {
            /* Affiche les chiffres des heures et minutes en format 'HH:MM' */
            _putchar('0' + (heure / 10));  /* Affiche le premier chiffre de l'heure */
            _putchar('0' + (heure % 10));  /* Affiche le second chiffre de l'heure */
            _putchar(':');  /* Affiche le séparateur ':' */
            _putchar('0' + (minute / 10));  /* Affiche le premier chiffre de la minute */
            _putchar('0' + (minute % 10));  /* Affiche le second chiffre de la minute */
            _putchar('\n');  /* Passe à la ligne suivante après chaque heure et minute */
        }
    }
}
