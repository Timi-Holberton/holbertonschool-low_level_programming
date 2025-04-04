#include "main.h"
/**
 * main - copie un fichier dans un autre
 * @argc: nombre argument
 * @argv: contenue argument
 * Return: 1 en cas de succès, -1 en cas d'erreur
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, caractere_lue, caractere_write;
	char stockage1[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((caractere_lue = read(fd1, stockage1, 1024)) > 0)
	{
		caractere_write = write(fd2, stockage1, caractere_lue);
		if (caractere_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd1);
			exit(99);
		}
	}

	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}

	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
