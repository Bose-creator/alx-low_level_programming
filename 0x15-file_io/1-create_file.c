#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: is the name of the file to create.
 * @text_content: a content that is NULL create an empty file.
 *
 * Return: return 1 if it success. -1 if it fails.
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(fd, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
