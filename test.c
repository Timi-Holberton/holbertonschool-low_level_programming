int i, j;

/* Trouver la fin de la chaîne dest */
for (j = 0; dest[j] != '\0'; j++)
	; /* Boucle vide pour trouver la fin */

/* Ajouter jusqu'à n caractères de src à dest */
for (i = 0; i < n && src[i] != '\0'; i++, j++)
{
	dest[j] = src[i]; /* Copier chaque caractère de src dans dest */
}

dest[j] = '\0'; /* Ajouter un caractère nul à la fin de dest */

return (dest); /* Retourner la chaîne de destination */
}
