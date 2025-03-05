#include <stdio.h>
#include "main.h"

/**
 * factorial - Entry point
 *
 * Return: Always 0 (Success)
 */
int factorial(int n);
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return ((1) + factorial(n));
	}
}
