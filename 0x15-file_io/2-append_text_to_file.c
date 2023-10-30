#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	int rw;

	if (!filename)
		return (0);
	fd = open(filename, O_WRONLY | O_APPEND);
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
