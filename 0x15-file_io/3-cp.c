#include "main.h"
/**
 * find_code - exits if arument is incorrect
 * @argc: argument count
 * Return: void
 */
void find_code(int argc)
{
	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * find_if_read - surveys if file is readable
 * @find: confirms if file exists
 * @file: its a file_from pointer
 * @fildes_frm: descripts file_from
 * @fildes_to: descripts file_to
 * Return: void
 */
void find_if_read(ssize_t find, char *file, int fildes_frm, int fildes_to)
{
	if (find < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fildes_frm != -1)
			close(fildes_frm);
		if (fildes_to != -1)
			close(fildes_to);
		exit(98);
	}
}

/**
 * find_if_write - checksif file is writeable
 * @find: traverses to confirm
 * @file: filename to file_to
 * @fildes_frm: descript file_from
 * @fildes_to: descripts of file_to,
 * Return: void
 */
void find_if_write(ssize_t find, char *file, int fildes_frm, int fildes_to)
{
	if (find < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fildes_frm != -1)
			close(fildes_frm);
		if (fildes_to != -1)
			close(fildes_to);
		exit(99);
	}
}

/**
 * find_if_close - confirms if a file is closeable
 * @find: surveys for status
 * @fildes: file descriptor
 * Return: void
 */
void find_if_close(int find, int fildes)
{
	if (find < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fildes);
		exit(100);
	}
}
/**
 * main - duplicates file and content in it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fildes_frm, fildes_to, close_to, close_frm;
	ssize_t arr_r, arr_w;
	char buffer[1024];
	mode_t file_permission;

	find_code(argc);
	fildes_frm = open(argv[1], O_RDONLY);
	find_if_read((ssize_t)fildes_frm, argv[1], -1, -1);
	file_permission = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fildes_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_permission);
	find_if_write((ssize_t)fildes_to, argv[2], fildes_frm, -1);
	arr_r = 1024;
	while (arr_r == 1024)
	{
		arr_r = read(fildes_frm, buffer, 1024);
		find_if_read(arr_r, argv[1], fildes_frm, fildes_to);
		arr_w = write(fildes_to, buffer, arr_r);
		if (arr_w != arr_r)
			arr_w = -1;
		find_if_write(arr_w, argv[2], fildes_frm, fildes_to);
	}
	close_to = close(fildes_to);
	close_frm = close(fildes_frm);
	find_if_close(close_to, fildes_to);
	find_if_close(close_frm, fildes_frm);
	return (0);
}
