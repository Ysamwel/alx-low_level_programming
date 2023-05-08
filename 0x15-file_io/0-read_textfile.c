#include "main.h"
/**
 * read_textfile - it reads and prints a text file to POSIX
 * @filename: points to where the file is stored in a buffer
 * @letters: characters to read and output.
 * Return: the number of letter characters, if not open
 * enabled 0, NULL 0,if cant write 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fildes;/*opens filename*/
	ssize_t fil_r,/*reads filename text*/ fil_w;/*writes output*/
	char *buffer;/*temporary memory location*/


	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fildes = open(filename, O_RDONLY);
	fil_r = read(fildes, buffer, letters);
	fil_w = write(STDOUT_FILENO, buffer, fil_r);

	if (fildes < 0 || fil_w < 0 || fil_w < 0 || fil_w != fil_r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fildes);

	return (fil_w);
}
