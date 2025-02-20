#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry point
 * @c : c'est c
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
