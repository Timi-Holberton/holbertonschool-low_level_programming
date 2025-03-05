#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - Entry point
 * carrede - carré naturelle
 * @n : racine carré
 * @n : racine carré
 * @nbre : nombre multiplié
 * Return: Always 0 (Success)
 */
int carrede(int n, int nbre)
{
	if (nbre * nbre == n)
	{
		return (nbre);
	}
	else if (nbre * nbre > n)
	{
		return (-1);
	}
	return (carrede(n, nbre + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (carrede(n, 1));
}
