#include <stdio.h>
#include <string.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * get_op_func - Sélectionne la fonction correspondant à l'opérateur.
 * @s: Chaîne représentant l'opérateur.
 *
 * Cette fonction compare @s aux opérateurs disponibles et retourne
 * un pointeur vers la fonction correspondante si elle existe.
 *
 * Return: Pointeur vers la fonction correspondant à @s,
 * ou NULL si l'opérateur est invalide.
 */
int (*get_op_func(char *s))(int, int) /* La fonction retourne un pointeur */
{
	/* Tableau des structures contenant les opérateurs et leurs fonctions */
	op_t ops[] = {
		{"+", op_add},  /* '+' correspond à la fonction op_add */
		{"-", op_sub},  /* '-' correspond à la fonction op_sub */
		{"*", op_mul},  /* '*' correspond à la fonction op_mul */
		{"/", op_div},  /* '/' correspond à la fonction op_div */
		{"%", op_mod},  /* '%' correspond à la fonction op_mod */
		{NULL, NULL}    /* Terminaison de la liste d'opérateurs */
	};

	int i = 0; /* Initialisation de l'index pour parcourir le tableau */

	/* Parcours du tableau d'opérateurs jusqu'à ce qu'on trouve une
	   correspondance ou que le tableau soit terminé */
	while (ops[i].op != NULL)
	{
		/* Si l'opérateur correspond à celui passé en argument, on
		   retourne la fonction associée */
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f); /* Retourne le pointeur vers la fonction */
		}
		i++; /* Passe à l'élément suivant du tableau */
	}
/* Si aucun opérateur valide n'a été trouvé, on retourne NULL */
	return (NULL);
}

/**
 * Lexique des termes utilisés :
 * op_t : Structure contenant un opérateur et une fonction associée.
 * strcmp : Fonction de comparaison de chaînes de caractères.
 * NULL : Valeur qui représente un pointeur vide.
 * f : Pointeur vers la fonction associée à un opérateur.
 */

/**
 * Notions de base :
 * 1. Tableau de structures : Utilisation pour regrouper des éléments
 * ayant une structure commune (opérateur + fonction).
 * 2. Fonction et pointeur de fonction : Retourner une fonction via un
 * pointeur pour la sélectionner dynamiquement.
 * 3. Comparaison de chaînes : strcmp permet de comparer des chaînes
 * et de vérifier si elles sont égales.
 * 4. Retour de NULL : Utilisation de NULL pour signaler qu'aucune fonction
 * ne correspond à l'opérateur donné.
 */
