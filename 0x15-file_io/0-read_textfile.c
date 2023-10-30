#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 *
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. If fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wt;
	char *buf_size;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf_size = malloc(sizeof(char) * (letters));
	if (!buf_size)
		return (0);

	rd = read(fd, buf_size, letters);
	wt = write(STDOUT_FILENO, buf_size, rd);

	close(fd);
	free(buf_size);
	return (wt);
}
