#include "main.h"
#include <stdio.h>

/**
 * _strncat - check the code
 * @dest : destination
 * @src : source
 * @n : var
 * Return: Always 0.
 */

 char *_strncat(char *dest, char *src, int n) /* n = position dans tableau*/
{
	n = 0;
	int i;
	i = 0;

	while (dest[n] != '\0')
		n++;

	while (src[i] != '\0')
	{
		dest[n] = src[i];
		i++;
		n++;
	}
		dest[n] = '\0';

	return (dest);
}
