#include <stdio.h>
#include "main.h"

/**
 * _strcmp - Compare deux chaînes de caractères.
 * @s1: Tableau de caractères 1.
 * @s2: Tableau de caractères 2.
 *
 * Return: Un nombre positif si s1 est supérieur à s2,
 *         un nombre négatif si s1 est inférieur à s2,
 *         ou 0 si les deux chaînes sont égales.
 */
int _strcmp(char *s1, char *s2)
{
    int i = 0;

    /* Compare un à un chaque caractère des deux chaînes */
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        /* Si un caractère diffère, on soustrait leurs valeurs ASCII */
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);  /* Retourne la différence des codes ASCII */
        }
        i++;  /* Incrémentation de l'index pour la prochaine comparaison */
    }

    /* Si on atteint la fin d'une chaîne, on compare les codes ASCII des derniers caractères */
    return (s1[i] - s2[i]);
}

/**
 * Lexique :
 * - `char *s1` : Un pointeur vers le premier tableau de caractères (chaîne).
 * - `char *s2` : Un pointeur vers le deuxième tableau de caractères (chaîne).
 * - `'\0'` : Caractère nul utilisé pour marquer la fin d'une chaîne de caractères.
 * - `return (s1[i] - s2[i])` : Retourne la différence entre les codes ASCII des caractères correspondants.
 *
 * Notions de base :
 * - **Pointeurs** : Les paramètres `char *s1` et `char *s2` sont des pointeurs vers des chaînes de caractères.
 *   Cela permet de manipuler directement les chaînes en mémoire, sans avoir à les copier.
 * - **Boucle `while`** : La boucle `while` compare chaque caractère des deux chaînes jusqu'à ce qu'une différence soit trouvée
 *   ou que la fin des deux chaînes soit atteinte. Elle permet de parcourir les chaînes.
 * - **Code ASCII** : La comparaison est effectuée sur les valeurs ASCII des caractères. Si un caractère est supérieur à l'autre,
 *   la différence sera positive, et inversement.
 * - **Caractère nul `'\0'`** : Marque la fin d'une chaîne de caractères en C. Si une chaîne est plus courte, la boucle `while`
 *   s'arrête dès que le caractère nul est rencontré.
 */
