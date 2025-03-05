#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - Entry point
 * @n : racine carré
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	int x = 0;

	if ((x * x) > n)
	{
		return (-1);
	}
	if ((x * x) == n)
	{
		return (x);
	}
	return ((1) * _sqrt_recursion(n - 1));
}
