#include <stdio.h>
#include "main.h"

/**
 * _atoi - Convertit une chaîne de caractères en un entier.
 * @s: Chaîne de caractères à convertir.
 * Return: Retourne l'entier correspondant à la chaîne.
 *
 * Explications :
 * - La fonction parcourt la chaîne pour gérer les signes ('-' ou '+').
 * - Ensuite, elle lit les chiffres et les convertit en un entier.
 * - Si un signe est trouvé avant les chiffres, il affecte le signe de l'entier.
 * - Les caractères autres que les signes et les chiffres sont ignorés.
 */
int _atoi(char *s)
{
    int i;
    unsigned int negatif = 1;   /* Variable pour stocker le signe : positif par défaut */
    unsigned int nombre = 0;     /* Variable pour accumuler le nombre entier */

    /* Parcours de la chaîne pour gérer les signes et ignorer les non-chiffres */
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '-')       /* Si un signe '-' est trouvé, inverser le signe */
        {
            negatif *= -1;     /* Inverser le signe */
        }
        else if (s[i] == '+')  /* Si un signe '+' est trouvé, on ne fait rien */
        {
        }
        else if (s[i] >= '0' && s[i] <= '9') /* Si un chiffre est trouvé, commencer la conversion */
        {
            break;  /* Sortir de la boucle pour commencer à lire le nombre */
        }
    }

    /* Parcours des chiffres et conversion en entier */
    for (; s[i] >= '0' && s[i] <= '9'; i++)
    {
        nombre = nombre * 10 + (s[i] - '0');  /* Construction du nombre à partir des chiffres */
    }

    /* Retourner le nombre avec le signe approprié */
    return (nombre * negatif);
}

/**
 * Lexique :
 * - Chaîne de caractères (String) : Une séquence de caractères terminée par un caractère nul ('\0'). Exemple : "123".
 * - Entier (Integer) : Un type de données représentant un nombre entier.
 * - Signe (Sign) : Le caractère '-' ou '+' indiquant si un nombre est négatif ou positif.
 * - Conversion (Conversion) : Le processus de transformation d'une chaîne de caractères en un autre type de données, ici de `char` en `int`.
 * - Boucle (Loop) : Une structure permettant de répéter une action plusieurs fois, ici utilisée pour parcourir la chaîne de caractères.

 * Rappel des notions de base :
 * - Tableaux (Arrays) : Les chaînes sont des tableaux de caractères en C, et chaque caractère est accessible par un index.
 * - Boucles (Loops) : Les boucles `for` sont utilisées pour itérer sur les éléments de la chaîne.
 * - Opérations sur les caractères (Character operations) : Les caractères sont traités en tant que valeurs ASCII, permettant d'effectuer des opérations arithmétiques.
 * - Pointeurs (Pointers) : Les chaînes en C sont manipulées comme des pointeurs vers leurs premiers éléments.
 */
