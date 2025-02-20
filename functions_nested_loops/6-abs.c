#include <stdio.h>
#include "main.h"

/**
 * _abs - Entry point
 * @nbre : nombre
 * Return: Always 0 (Success)
 */

int _abs(int nbre)
{
	if (nbre >= 0)
		return (nbre);

	return (-(nbre));
}
