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
	int i = 0;
	int j;

	char *dest = malloc(i * sizeof(char));

	for (; str[i] != '\0'; i++)
	;

	if (!dest)
	{
		return (NULL);
	}

	for (j = 0; str[j] != '\0'; j++)
	{
		dest[j] = str[j];
	}
	dest[j] = '\0';

		if (str == 0)
	{
		return (NULL);
	}

	return (dest);
}
