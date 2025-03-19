#include <stdio.h>
#include <string.h>
#include "function_pointers.h"
#include "3-calc.h"

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

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
