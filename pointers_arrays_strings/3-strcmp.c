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
	int i = 0;
/* compare un a un chaque caractère */
	while (s1[i] != '\0' && s2[i] != '\0')
	{/* si 1 caractère diffère on soustrait*/
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);/* code */
		}
		i++; /* penser a incrémenter dans while*/
	}
	return (s1[i] - s2[i]);
}
