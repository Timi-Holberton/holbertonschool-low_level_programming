#include <stdio.h>   /* Inclut les fonctions d'affichage */
#include <stdarg.h>  /* Permet l'utilisation des arguments variadiques */
#include "variadic_functions.h" /* Définition de la fonction */

/**
 * sum_them_all - Calcule la somme de n nombres
 * @n: Nombre total d'arguments passés
 *
 * Cette fonction prend un nombre indéfini d'entiers en entrée
 * et retourne leur somme. Si n est 0, elle retourne 0.
 *
 * Return: La somme des nombres passés en argument
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i; /* Index pour parcourir les arguments */
	unsigned int resultat = 0; /* Stocke la somme des valeurs */
	va_list ap; /* Déclare une liste d'arguments variadiques */

	if (n == 0) /* Si aucun argument, retourne 0 */
		return (0);

	va_start(ap, n); /* Initialise la liste des arguments */

	for (i = 0; i < n; i++) /* Parcourt tous les arguments */
	{
		resultat = resultat + va_arg(ap, unsigned int);
		/* va_arg récupère un argument de type unsigned int */
	}

	va_end(ap); /* Termine l'utilisation de la liste */

	return (resultat); /* Retourne la somme calculée */
}

