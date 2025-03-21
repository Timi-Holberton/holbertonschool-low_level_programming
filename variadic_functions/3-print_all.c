#include <stdarg.h> /* Bibliothèque pour gérer les arguments ... */
#include <stdio.h>  /* Bibliothèque pour printf */
#include "variadic_functions.h" /* Header des fonctions */

/* Fonction pour afficher un caractère */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int)); /* Récupère un char en int */
}

/* Fonction pour afficher un entier */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int)); /* Récupère un int */
}

/* Fonction pour afficher un float */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double)); /* Récupère un float */
}

/* Fonction pour afficher une chaîne de caractères */
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
 * - c : caractère (char)
 * - i : entier (int)
 * - f : nombre flottant (float)
 * - s : chaîne de caractères (string)
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
			if (format[i] == type[j].symbol) /* Si le type correspond */
			{
				printf("%s", separator); /* Ajoute le séparateur */
				type[j].print_function(args); /* Appelle la bonne fct */
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
 * Lexique :
 * - va_list : type pour stocker les arguments variables.
 * - va_start : initialise la liste des arguments.
 * - va_arg : extrait un argument de la liste.
 * - va_end : termine l'utilisation de va_list.
 * - format : chaîne contenant les types des arguments.
 * - printf : fonction d'affichage formaté.
 */

/**
 * Rappels des notions en C :
 * - Les pointeurs : Un pointeur stocke l'adresse d'une variable.
 * - Les tableaux : Un tableau est une suite d'éléments du même type.
 * - Les structures : Permettent de regrouper des données sous un nom.
 * - Les boucles while : Exécutent un bloc tant qu'une condition est vraie.
 * - Les conditions if : Permettent d'exécuter un bloc selon une condition.
 */
