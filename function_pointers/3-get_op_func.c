#include <stdio.h> /* Inclusion pour printf */
#include <string.h> /* Inclusion pour strcmp */
#include "function_pointers.h" /* Inclusion du fichier d'en-tête */
#include "3-calc.h" /* Contient les déclarations des fonctions */

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
int (*get_op_func(char *s))(int, int)
{
	/* Déclaration d'un tableau de structures contenant */
	/* les opérateurs et leurs fonctions associées */
	op_t ops[] = {
		{"+", op_add}, /* Addition */
		{"-", op_sub}, /* Soustraction */
		{"*", op_mul}, /* Multiplication */
		{"/", op_div}, /* Division */
		{"%", op_mod}, /* Modulo */
		{NULL, NULL} /* Marqueur de fin */
	};

	int i = 0; /* Initialisation de l'index */

	/* Parcours du tableau pour trouver l'opérateur */
	while (ops[i].op != NULL && strcmp(ops[i].op, s) != 0)
	{
		i++; /* Incrémentation de l'index */
	}

	/* Retourne la fonction correspondante ou NULL si non trouvé */
	return (ops[i].f);
}

/*
Lexique des termes techniques :
- opérateur (operator) : Symbole représentant une opération (+, -, *, etc.).
- pointeur de fonction (function pointer) : Stocke l'adresse d'une fonction.
- tableau de structures (array of structures) : Contient plusieurs éléments.
- comparaison de chaînes (string comparison) : Comparer deux chaînes de texte.

Rappel des notions de base :
- `strcmp()` : Compare deux chaînes de caractères.
- `NULL` : Valeur spéciale indiquant une absence de donnée.
- `while` : Boucle exécutée tant qu'une condition est vraie.
- Structures (`struct`) : Permettent de regrouper plusieurs données.
*/
