#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: filename is NULL return 0.
 * @letters: the numbers of printed letters.
 *
 * Return: if write fails or does not write
 * the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ed;
	ssize_t mer, waa;
	char *buf;

	if (!filename)
		return (0);

	ed = open(filename, O_RDONLY);

	if (ed == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	mer = read(ed, buf, letters);
	waa = write(STDOUT_FILENO, buf, mer);

	close(ed);

	free(buf);

	return (waa);
}
