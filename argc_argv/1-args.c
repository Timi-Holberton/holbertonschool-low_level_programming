#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc : nombre d'argument, toujours un int
 * @argv : contenu des arguments, toujours un char
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
