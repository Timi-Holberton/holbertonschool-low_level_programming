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

	if (str == NULL)
	{
		return (NULL);
	}


	char *dest = malloc((i + 1) * sizeof(char));

	for (i = 0; str[i] != '\0'; i++)
	{
		dest[i] = str[i];
	}

	if (dest == NULL)
	{
		return (NULL);
	}

	return (dest);
}
