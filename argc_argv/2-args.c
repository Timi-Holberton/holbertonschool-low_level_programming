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

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
