#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h> /* Bibliothèque pour gérer les arguments */

/**
 * struct format1 - Associe un symbole à une fonction d'affichage
 * @symbol: Type à afficher ('c', 'i', 'f', 's')
 * @print_function: Pointeur vers la fonction correspondante
 */
typedef struct format1
{
    char symbol;
    void (*print_function)(va_list args);
} format1;

/* Prototypes des fonctions */
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */

/**
 * Lexique :
 * - typedef : Définit un alias pour un type.
 * - struct : Structure qui regroupe plusieurs variables.
 * - va_list : Type pour stocker des arguments variables.
 * - va_start : Initialise la liste des arguments.
 * - va_arg : Extrait un argument de la liste.
 * - va_end : Termine l'utilisation de va_list.
 */

/**
 * Rappels des notions en C :
 * - Les structures permettent d'associer plusieurs types sous un seul nom.
 * - Un pointeur de fonction stocke l'adresse d'une fonction et permet
 *   de l'exécuter dynamiquement.
 * - Les prototypes de fonction définissent les signatures des fonctions
 *   avant leur implémentation.
 */
