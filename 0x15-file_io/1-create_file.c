#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include "main.h"

/**
 * create_file - create a file
 * @filename: name of file
 * @text_content: string to be written to the new file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	unsigned int i, count = 0;
	ssize_t fd, wc;

	if (!filename)
		return (-1);

	/* Count the number of chars in text_content if it is not NULL */
	/* An empty file is created if text_content is NULL */
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
		{
			count++;
		}
	}

	/* Create file with chmod 6 for user if file does not exist */
	/* Truncate file and maintain its permissions if it exists */
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0000600);
	wc = write(fd, text_content, count);
	close(fd);

	if (fd == -1 || wc == -1)
		return (-1);

	return (1);
}
