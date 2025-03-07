#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - calcul avec arguement variable inconnu
 * @argc : nombre d'argument, toujours un int
 * @argv : contenu des arguments, toujours un char
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int addition = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	if (!isdigit(*argv[i]))
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			addition = addition + atoi(argv[i]);
		}
		printf("%d\n", addition);
	}
	return (0);
}
