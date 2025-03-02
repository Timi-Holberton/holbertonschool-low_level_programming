#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Entry point
 *@a : tableau de int pas de \O à la fin
 *@n : compteur position tab (index)
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int i, j, echange;

	i = 0;
	j = n - 1; /*faire - 1 car un tableau commence à O et pas à 1 */

	while (i < j) /* tant que i n'atteint pas la fin du tab*/
	{
		echange = a[i]; /* intervertir caracteres */
		a[i] = a[j];
		a[j] = echange;

		i++; /* incrémenté pour afficher dans l'ordre*/
		j--; /* décrémenter pour afficher l'inverse*/
	}
}	/* pas de return (0) car void*/
