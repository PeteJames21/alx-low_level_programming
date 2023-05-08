#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - read a text file and print it to the POSIX standard output
 * @filename: pathname of text file to be printed
 * @letters: number of chars to be read and written from the file
 *
 * Return: the actual number of letters thar were read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rc, wc;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	rc = read(fd, buffer, letters);
	wc = write(STDOUT_FILENO, buffer, rc);

	close(fd);
	free(buffer);

	if (fd == -1 || wc == -1 || rc == -1 || wc != rc)
		return (0);

	return (wc);
}
