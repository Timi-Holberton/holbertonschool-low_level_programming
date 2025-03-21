#include <stdarg.h> /* Bibliothèque pour gérer les arguments */
#include <stdio.h>  /* Bibliothèque pour printf */
#include "variadic_functions.h" /* Header des fonctions */

/**
 * print_char - Affiche un caractère
 * @args: Liste des arguments
 *
 * Description:
 * - Récupère un caractère de type `char` stocké en `int`
 *   dans la liste d'arguments et l'affiche.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int)); /* Récupère un char en int */
}

/**
 * print_int - Affiche un entier
 * @args: Liste des arguments
 *
 * Description:
 * - Récupère un entier `int` depuis la liste et l'affiche.
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int)); /* Récupère un int */
}

/**
 * print_float - Affiche un nombre flottant
 * @args: Liste des arguments
 *
 * Description:
 * - Récupère un `float` stocké en `double` et l'affiche.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double)); /* Récupère un float */
}

/**
 * print_string - Affiche une chaîne de caractères
 * @args: Liste des arguments
 *
 * Description:
 * - Récupère une chaîne de caractères (`char *`).
 * - Si la chaîne est NULL, affiche "(nil)".
 */
void print_string(va_list args)
{
	char *s = va_arg(args, char *); /* Récupère un char * */

	if (!s) /* Vérifie si la chaîne est NULL */
		s = "(nil)"; /* Affiche (nil) si NULL */

	printf("%s", s);
}

/**
 * print_all - Affiche différents types selon le format donné
 * @format: Chaîne contenant les types ('c', 'i', 'f', 's')
 *
 * Description:
 * - `c` : caractère (`char`)
 * - `i` : entier (`int`)
 * - `f` : nombre flottant (`float`)
 * - `s` : chaîne de caractères (`char *`)
 * Si un argument est NULL, (nil) est affiché.
 * Séparation par ", " entre chaque élément.
 */
void print_all(const char * const format, ...)
{
	char *separator = ""; /* Séparateur vide au départ */
	int i = 0, j; /* i : parcours format, j : parcours tableau */

	va_list args; /* Liste des arguments */

	/* Tableau associatif des types et fonctions correspondantes */
	format1 type[] = {
		{'c', print_char}, {'i', print_int},
		{'f', print_float}, {'s', print_string}
	};

	va_start(args, format); /* Initialise la liste des arguments */

	while (format && format[i]) /* Parcourt la chaîne format */
	{
		j = 0;
		while (j < 4) /* Vérifie les 4 types possibles */
		{
			if (format[i] == type[j].symbol) /* Si type correct */
			{
				printf("%s", separator); /* Ajoute le séparateur */
				type[j].print_function(args); /* Affiche l'élément */
				separator = ", "; /* Définit le séparateur */
				break; /* Sort de la boucle */
			}
			j++;
		}
		i++;
	}

	va_end(args); /* Termine l'utilisation de la liste */
	printf("\n"); /* Ajoute un saut de ligne final */
}

/**
 * Lexique 
 * - va_list : Type pour stocker des arguments variables.
 * - va_start : Initialise la liste des arguments.
 * - va_arg : Extrait un argument de la liste.
 * - va_end : Termine l'utilisation de va_list.
 * - typedef : Crée un alias pour un type.
 * - struct : Structure regroupant plusieurs variables.
 * - Pointeur de fonction : Stocke l'adresse d'une fonction.
 */

/**
 * Rappels des notions en C
 * - Les structures permettent d'associer plusieurs types sous un seul nom.
 * - Un pointeur de fonction stocke l'adresse d'une fonction et permet
 *   de l'exécuter dynamiquement.
 * - Les prototypes de fonction définissent les signatures des fonctions
 *   avant leur implémentation.
 */
