#include "main.h"
#include <stdio.h>

/**
 * check_file - checks files that can be opened
 *
 * @file_from: file that we will copy from
 * @file_to: file that we will copy to
 * @argv: argument vector
 *
 * Return: 0
 */
void check_file(int file_from, int file_to, size_t *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - a program that copies the content of a file to another file
 *
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0
 */
int main(int argc, size_t *argv[])
{
	int file_from, file_to, err;
	ssize_t ch_num, rw;
	char buf_size[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_APPEND, 0664);
	check_file(file_from, file_to, argv);
	ch_num = 1024;
	while (ch_num == 1024)
	{
		ch_num = read(file_from, buf_size, 1024);
		if (ch_num == -1)
			check_file(-1, 0, argv);
		rw = write(file_to, buf_size, ch_num);
		if (rw == -1)
			check_file(0, -1, argv);
	}
	err = close(file_from);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err = close(file_to);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
