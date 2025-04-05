#include "main.h"
/**
 * append_text_to_file - Crée un fichier et écrit dedans
 * @filename: Nom du fichier à créer
 * @text_content: Texte à écrire dans le fichier (NULL = fichier vide)
 * Return: 1 en cas de succès, -1 en cas d'erreur
 * (échec de création ou d'écriture).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, stock_write;
	int i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
		stock_write = write(fd, text_content, i);

		if (stock_write == -1 || stock_write != i)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

/*
* Retourne 1 si le fichier existe et -1 si le fichier n'existe pas ou si
* vous n'avez pas les permissions nécessaires pour écrire le fichier.
*/

