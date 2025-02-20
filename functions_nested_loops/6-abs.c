#include <stdio.h>
#include "main.h"

/**
 * _abs - Entry point
 * @n : n
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (_abs(n));
	}
}

