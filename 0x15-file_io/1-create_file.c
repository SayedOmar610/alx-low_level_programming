#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int rw;

	if (!filename)
		return (0);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (len = 0; text_content[len]; len++)
		;
	rw = write(fd, text_content, len);
	if (rw == -1)
		return (-1);
	close(fd);
	return (1);
}