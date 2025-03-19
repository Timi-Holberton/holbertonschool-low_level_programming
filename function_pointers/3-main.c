#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - description
 * @argc: Le nombre d'arguments passés à la ligne de commande.
 * @argv: Un tableau de chaînes de caractères
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0, calc = 0;
	char *operator;

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (*operator == '\0' || strchr("+-*/%", *operator) == NULL )
	{
		printf("ERROR\n");
		exit(99);
	}
	if (((*operator == '/') || (*operator == '%')) && (num2 == 0))
	{
		printf("ERROR\n");
		exit(100);
	}

	calc = get_op_func(operator)(num1, num2);
	printf("%d\n", calc);

	return (0);
}
