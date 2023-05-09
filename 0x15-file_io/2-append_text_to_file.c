#include "main.h"
/**
 * append_text_to_file - this function does the appending at
 * the end of the file
 * @filename: name to the file
 * @text_content: NULL terminated string
 * Return: 1 on success -1 if unsuccessful and NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fildes, mycharacters, rwr;

	if (filename == NULL)
		return (-1);

	fildes = open(filename, O_WRONLY | O_APPEND);

	if (fildes == -1)
		return (-1);

	if (text_content)
	{
		for (mycharacters = 0; text_content[mycharacters]; mycharacters++)
			;

		rwr = write(fildes, text_content, mycharacters);

		if (rwr < 0)
			return (-1);
	}

	close(fildes);

	return (1);
}
