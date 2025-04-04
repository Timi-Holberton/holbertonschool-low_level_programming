#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read;
	ssize_t write_bytes;
	char *stockread;

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY); /* fd */
	if (fd == -1)
	{
		return (0);
	}

	stockread = malloc(letters);
	if (stockread == NULL)
	{
		close (fd);
		return (0);
	}

	bytes_read = read(fd, stockread, letters);
	if (bytes_read == -1)
	{
		free(stockread);
		close(fd);
		return (0);
	}

	write_bytes = write(STDOUT_FILENO, stockread, bytes_read);

	if (write_bytes == -1)
	{
		free(stockread);
		close(fd);
		return (0);
	}

	free(stockread);
	close (fd);
	return (write_bytes);
}
