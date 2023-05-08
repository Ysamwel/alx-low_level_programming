#include "main.h"
/**
 * create_file - file is created in this function
 * @filename:name of the file we are creating
 * @text_content: terminated string to write to the file
 * Return: 1 on success, -1 when file cant be written
 */
int create_file(const char *filename, char *text_content)
{
	int fildes, characters, rwr;

	if (!filename)
		return (-1);

	fildes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fildes < 0)
		return (-1);

	if (!text_content)
		text_content = "";

	for (characters = 0; text_content[characters]; characters++)
		;

	rwr = write(fildes, text_content, characters);

	if (rwr < 0)
		return (-1);

	close(fildes);

	return (1);
}
