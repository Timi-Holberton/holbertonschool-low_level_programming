#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Entry point
 *@str : tableau
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	int i, j;
	char *dest;

	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{

	}
	dest = malloc(i * sizeof(char));

	if (!dest)
	{
		return (NULL);
	}

	for (j = 0; str[j] != '\0'; j++)
	{
		dest[j] = str[j];
	}
	dest[j] = '\0';

	return (dest);
}
