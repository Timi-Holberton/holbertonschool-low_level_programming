#include <stdio.h>
#include "main.h"

/**
 * _atoi - Entry point
 * @s : var
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	int i;
	int negatif = 1;
	int nombre = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			negatif *= -1; /* On inverse le signe */
		}
		else if (s[i] == '+')
		{
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			/* début du nombre, on sort pour lire les chiffres */
			break;
		}
	}

	/* pour lire les chiffres du nombre */
	for (; s[i] >= '0' && s[i] <= '9'; i++)
	{
		nombre = nombre * 10 + (s[i] - '0');
	}

	return (nombre * negatif);
}
