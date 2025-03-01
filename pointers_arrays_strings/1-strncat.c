#include "main.h"
#include <stdio.h>

/**
 * _strncat - check the code
 * @dest : destination
 * @src : source
 * @n : var
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
 /* n = nbre max de caractère depuis src*/
{
	int i = 0;
	int j = 0;

	while (dest[j] != '\0')
		j++;

	while (i < n && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
		dest[j] = '\0';

	return (dest);
}
