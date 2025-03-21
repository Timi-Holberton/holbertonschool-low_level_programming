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
