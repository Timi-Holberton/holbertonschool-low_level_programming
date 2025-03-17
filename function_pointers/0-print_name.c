#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Affiche un nom en utilisant une fonction fournie.
 * @name: Nom de la personne à afficher.
 * @f: Pointeur vers une fonction prenant un char *.
 *
 * Cette fonction appelle la fonction pointée par @f en lui
 * passant le nom @name. Cela permet d'afficher le nom de
 * différentes manières selon la fonction fournie.
 *
 * Return: Rien.
 */
void print_name(char *name, void (*f)(char *))
{
	/* Vérifie si les paramètres sont valides */
	if (name != NULL && f != NULL)
	{
		/* Appelle la fonction pointée par f avec name */
		(*f)(name);
	}
}
