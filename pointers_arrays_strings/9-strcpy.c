#include <stdio.h>
#include "main.h"

/**
 * *_strcpy  - Entry point
 * @dest : destination
 * @src : source
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src) /* destination, source */
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
