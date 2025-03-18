#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * op_add - Additionne deux entiers.
 * @a: Premier entier.
 * @b: Deuxième entier.
 *
 * Cette fonction retourne la somme de @a et @b.
 *
 * Return: La somme de @a et @b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Soustrait deux entiers.
 * @a: Premier entier.
 * @b: Deuxième entier.
 *
 * Cette fonction retourne la différence entre @a et @b.
 *
 * Return: La différence entre @a et @b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplie deux entiers.
 * @a: Premier entier.
 * @b: Deuxième entier.
 *
 * Cette fonction retourne le produit de @a et @b.
 *
 * Return: Le produit de @a et @b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divise deux entiers.
 * @a: Numérateur.
 * @b: Dénominateur.
 *
 * Cette fonction retourne le quotient de @a par @b.
 * Attention : @b ne doit pas être égal à zéro.
 *
 * Return: Le quotient de @a par @b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calcule le reste d'une division entière.
 * @a: Numérateur.
 * @b: Dénominateur.
 *
 * Cette fonction retourne le reste de la division de @a par @b.
 * Attention : @b ne doit pas être égal à zéro.
 *
 * Return: Le reste de @a divisé par @b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
