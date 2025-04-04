#include "main.h"
#include <fcntl.h>	/* open : ouvrir un fichier */
#include <unistd.h>	/* read, write, close : opérations fichiers */
#include <stdlib.h>	/* malloc, free : gestion mémoire */

/**
 * read_textfile - Lit un fichier et affiche son contenu
 *@filename: Nom du fichier à lire
 *@letters: Nombre de caractères à lire
 * Return: Nombre de caractères affichés ou 0 en cas d'erreur
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;	/* Descripteur de fichier */
	ssize_t bytes_read;	/* Nombre d'octets lus */
	ssize_t write_bytes;	/* Nombre d'octets écrits */
	char *stockread;	/* Buffer pour stocker les données */

	if (filename == NULL)	/* Vérifie si le fichier existe */
		return (0);
	fd = open(filename, O_RDONLY);	/* Ouvre le fichier en lecture */
	if (fd == -1)	/* Vérifie si open() a échoué */
		return (0); /* Allocation mémoire pour stocker les données du fichier*/
	stockread = malloc(letters + 1);	/* +1 pour '\0' */
	if (stockread == NULL)	/* Vérifie l'allocation mémoire */
	{
		close(fd);	/* Ferme le fichier si allocation échoue */
		return (0);
	} /* Lecture du fichier et stockage dans stockread */
	bytes_read = read(fd, stockread, letters);
	if (bytes_read == -1)	/* Vérifie si read() a échoué */
	{
		free(stockread);	/* Libère la mémoire en cas d'erreur */
		close(fd);	/* Ferme le fichier */
		return (0);
	} /* Écriture des données lues sur la sortie standard (écran) */

	write_bytes = write(STDOUT_FILENO, stockread, bytes_read);
	if (write_bytes == -1)	/* Vérifie si write() a échoué */
	{
		free(stockread);	/* Libère la mémoire */
		close(fd);	/* Ferme le fichier */
		return (0);
	} /* Vérifie que tous les octets lus ont été écrits */
	if (write_bytes != bytes_read)
	{
		free(stockread);	/* Libère la mémoire */
		close(fd);	/* Ferme le fichier */
		return (0);
	}
	free(stockread);	/* Libère la mémoire allouée */
	close(fd);	/* Ferme le fichier après utilisation */
	return (write_bytes);	/* Retourne le nombre d'octets affichés */
}

/*
*Lexique :
fd (file descriptor) - Descripteur de fichier
malloc (memory allocation) - Allocation dynamique de mémoire
read - Lit un fichier et stocke les données en mémoire
write - Écrit les données en sortie (écran ici)
close - Ferme le fichier pour libérer des ressources
*/

/*
*Rappel des notions de base :
- Un fichier est manipulé via un descripteur (fd).
- `malloc()` alloue dynamiquement de la mémoire.
- `read()` permet de lire le contenu d'un fichier.
- `write()` affiche le contenu sur la sortie standard.
- `close()` ferme le fichier pour éviter les fuites de ressources.
- `free()` libère la mémoire allouée par `malloc()`.
- Toujours vérifier les erreurs (`-1` pour open, read, write).
*/
