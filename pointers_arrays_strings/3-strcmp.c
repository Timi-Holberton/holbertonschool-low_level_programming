#include <stdio.h>
#include "main.h"

/**
 * _strcmp - Entry point
 *@s1 : tableau 1
 *@s2 : tableau 2
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)

	for (j = 0; s2[j] != '\0'; j++)

	if (s1[i] == s2[j])
	{
		return (0);/* code */
	}
	else if (s1[i] > s2[j])
	{
		return (i > 0);
	}
	else
	{
		return (i < 0);
	}
	return (i);
}
