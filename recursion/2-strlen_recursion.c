#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Calcule la longueur d'une chaîne de caractères
 *                      en utilisant la récursivité.
 * @s : chaîne de caractères à analyser
 * Return: La longueur de la chaîne
 *
 * La fonction _strlen_recursion utilise un processus récursif pour calculer
 * la longueur d'une chaîne de caractères. Elle compare chaque caractère de la chaîne
 * avec le caractère nul ('\0'), qui marque la fin de la chaîne. À chaque appel
 * récursif, la fonction descend d'un caractère dans la chaîne jusqu'à ce que la fin
 * de la chaîne soit atteinte.
 *
 * Ce processus permet d'éviter l'utilisation de boucles classiques, tout en
 * obtenant un résultat identique. La fonction appelle elle-même, chaque fois
 * qu'elle traite un caractère, jusqu'à ce qu'elle rencontre la fin de la chaîne.
 */
int _strlen_recursion(char *s)
{
	/** Vérifie si on est à la fin de la chaîne */
	if (*s == '\0') /* Si le caractère actuel est '\0', cela signifie la fin de la chaîne */
	{
		return (0); /* Retourne 0 pour signaler que nous avons atteint la fin de la chaîne */
	}

	/** Si ce n'est pas la fin, on continue la récursion */
	/* On additionne 1 à chaque appel récursif pour compter les caractères */
	return ((1) + _strlen_recursion(s + 1)); /* Appel récursif pour le caractère suivant */
}

/**
 * Lexique :
 * - Recursion (Récursivité) : Un processus où une fonction s'appelle elle-même pour
 *   résoudre une tâche, ici pour compter les caractères de la chaîne.
 * - String (Chaîne de caractères) : Une séquence de caractères en mémoire,
 *   terminée par un caractère spécial '\0'.
 * - '\0' : Le caractère nul, qui marque la fin d'une chaîne de caractères. Il n'est pas
 *   considéré comme un caractère, mais est essentiel pour identifier la fin de la chaîne.
 * - Fonction récursive : Une fonction qui s'appelle elle-même jusqu'à ce qu'un critère de
 *   terminaison soit atteint, ici lorsque le caractère '\0' est rencontré.
 *
 * Rappel des notions de base :
 * - Une chaîne de caractères en C est un tableau de caractères terminée par le caractère '\0'.
 * - La récursivité est une méthode dans laquelle une fonction s'appelle elle-même pour résoudre une sous-partie du problème.
 *   Dans ce cas, la sous-partie est de traiter un caractère à la fois dans la chaîne.
 * - La ligne `return ((1) + _strlen_recursion(s + 1));` retourne la somme du caractère actuel (1) et de la longueur des caractères
 *   restants, obtenue par l'appel récursif.
 * - L'appel récursif fonctionne en avançant dans la chaîne de caractères (`s + 1`), ce qui permet de traiter chaque caractère successivement.
 */
