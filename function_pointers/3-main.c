#include <stdio.h> /* Inclusion pour printf */
#include <stdlib.h> /* Inclusion pour exit et atoi */
#include <string.h> /* Inclusion pour manipuler les chaînes */
#include "function_pointers.h" /* Fichier d'en-tête personnalisé */
#include "3-calc.h" /* Contient la déclaration des fonctions */

/**
 * main - Programme principal effectuant une opération arithmétique.
 * @argc: Nombre d'arguments passés en ligne de commande.
 * @argv: Tableau contenant les arguments sous forme de chaînes.
 * Return: 0 en cas de succès, sinon un code d'erreur.
 */
int main(int argc, char *argv[])
{
	int num1, num2, calc; /* Déclaration des variables */
	int (*operator)(int, int); /* Pointeur de fonction */

	/* Vérification du nombre d'arguments */
	if (argc != 4)
	{
		printf("Error\n"); /* Message d'erreur */
		exit(98); /* Quitte avec le code d'erreur 98 */
	}

	/* Conversion des arguments en entiers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/* Récupération de la fonction correspondant à l'opérateur */
	operator = get_op_func(argv[2]);

	/* Vérification de la validité de l'opérateur */
	if (operator == NULL)
	{
		printf("Error\n"); /* Message d'erreur */
		exit(99); /* Quitte avec le code d'erreur 99 */
	}

	/* Vérification d'une division par zéro */
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n"); /* Message d'erreur */
		exit(100); /* Quitte avec le code d'erreur 100 */
	}

	/* Exécution de l'opération */
	calc = operator(num1, num2);

	/* Affichage du résultat */
	printf("%d\n", calc);

	/* Fin du programme */
	return (0);
}

/*
Lexique des termes techniques :
- argument (argument) : Valeur passée à une fonction.
- pointeur de fonction (function pointer) : Stocke l'adresse d'une fonction.
- opérateur (operator) : Symbole représentant une opération (+, -, *, etc.).
- conversion (conversion) : Transformation d'une valeur en un autre type.

Rappel des notions de base :
- Pointeurs de fonction : Permettent d'appeler une fonction via une variable.
- `atoi()` : Convertit une chaîne en entier.
- `exit()` : Termine le programme avec un code d'erreur spécifique.
- Opérations arithmétiques : Addition, soustraction, multiplication, etc.
*/
