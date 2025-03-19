#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - Programme principal effectuant une opération arithmétique.
 * @argc: Nombre d'arguments passés en ligne de commande.
 * @argv: Tableau contenant les arguments sous forme de chaînes.
 * Return: 0 en cas de succès, sinon un code d'erreur.
 */
int main(int argc, char *argv[])
{
	int num1, num2, calc;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = get_op_func(argv[2]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	calc = operator(num1, num2);
	printf("%d\n", calc);

	return (0);
}
