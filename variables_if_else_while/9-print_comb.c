#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nbre;

	for (nbre = 48; nbre <= 57; nbre++)
	{
		putchar(nbre);
		putchar(44);
		putchar(32);
	}
	putchar('\n');

	return (0);
}
