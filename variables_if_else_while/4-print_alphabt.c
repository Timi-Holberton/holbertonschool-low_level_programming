#include <stdio.h>

/**
 * main - Entry point
 * enlever un element d'une boucle
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alfaB;

	for (alfaB = 'a'; alfaB <= 'z'; alfaB++)
	{
		if (alfaB != 'e' && alfaB != 'q')
		{
			putchar(alfaB);
		}
	}
	putchar('\n');

return (0);
}
