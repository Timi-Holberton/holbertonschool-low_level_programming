#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatène une partie d'une chaîne
 * @s1: Première chaîne (string)
 * @s2: Deuxième chaîne (string)
 * @n: Nombre maximal de caractères à ajouter de s2
 *
 * Cette fonction alloue dynamiquement une nouvelle chaîne qui
 * contient s1 suivi des n premiers caractères de s2. Si n est plus
 * grand que la longueur de s2, toute s2 est ajoutée.
 *
 * Return: Pointeur vers la nouvelle chaîne concaténée, ou NULL si
 * l'allocation échoue.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int i, j, long1, long2;
    char *tab;

    /* Si s1 ou s2 est NULL, on les traite comme des chaînes vides */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calcul de la longueur de s1 */
    for (long1 = 0; s1[long1] != '\0'; long1++)
        ;
    /* Calcul de la longueur de s2 */
    for (long2 = 0; s2[long2] != '\0'; long2++)
        ;

    /* Si n est plus petit que long2, on limite long2 à n */
    if (n < long2)
        long2 = n;

    /* Allocation dynamique pour stocker la nouvelle chaîne */
    tab = malloc((long1 + long2 + 1) * sizeof(char));
    if (!tab) /* Vérification de l'échec de l'allocation */
        return (NULL);

    /* Copie de s1 dans tab */
    for (i = 0; i < long1; i++)
        tab[i] = s1[i];
    /* Copie des n premiers caractères de s2 dans tab */
    for (j = 0; j < n && s2[j] != '\0'; j++)
        tab[i + j] = s2[j];
    /* Ajout du terminateur nul */
    tab[i + j] = '\0';

    return (tab);
}

/**
 * Lexique:
 * - string: chaîne de caractères
 * - concatenate: concaténer, joindre des chaînes
 * - allocate: allouer de la mémoire dynamiquement
 * - pointer: pointeur, variable contenant une adresse mémoire
 *
 * Rappel des notions de base:
 * - Les pointeurs sont utilisés pour manipuler des chaînes dynamiquement.
 * - La fonction malloc alloue de la mémoire et doit être libérée
 *   avec free (non inclus ici, mais important en pratique).
 * - Les boucles for permettent d'itérer sur les caractères d'une chaîne.
 */
