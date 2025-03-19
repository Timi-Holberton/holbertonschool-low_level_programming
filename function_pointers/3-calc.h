#ifndef CALC_H /* Vérifie si CALC_H n'est pas défini */
#define CALC_H /* Définit CALC_H pour éviter les inclusions multiples */

/**
 * struct op - Structure associant un opérateur à une fonction.
 *
 * @op: L'opérateur sous forme de chaîne ("+", "-", etc.).
 * @f: Pointeur vers la fonction effectuant l'opération.
 */
typedef struct op
{
	char *op; /* Chaîne représentant l'opérateur */
	int (*f)(int a, int b); /* Pointeur vers une fonction */
} op_t; /* Alias de la structure */

/* Déclarations des fonctions d'opérations */
int op_add(int a, int b); /* Addition */
int op_sub(int a, int b); /* Soustraction */
int op_mul(int a, int b); /* Multiplication */
int op_div(int a, int b); /* Division */
int op_mod(int a, int b); /* Modulo */

/* Fonction sélectionnant l'opérateur correspondant */
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */ /* Fin de la directive de préprocesseur */

/*
Lexique des termes techniques :
- inclusion multiple (multiple inclusion) : Problème où un fichier est inclus
  plusieurs fois, causant des erreurs de compilation.
- directive de préprocesseur (preprocessor directive) : Commande traitée avant
  la compilation du code source (`#ifndef`, `#define`, `#endif`).
- structure (struct) : Type de donnée permettant de regrouper plusieurs valeurs.
- pointeur de fonction (function pointer) : Stocke l'adresse d'une fonction.
- opérateur (operator) : Symbole représentant une opération (+, -, *, etc.).

Rappel des notions de base :
- `typedef` : Crée un alias pour un type (ici `op_t` pour `struct op`).
- `#ifndef / #define / #endif` : Empêche l'inclusion multiple d'un fichier.
- Pointeurs de fonction : Permettent d'appeler une fonction via une variable.
*/
