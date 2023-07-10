#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include "main.h"

/**
 * append_text_to_file - append text to a file
 * @filename: name of file. File must exist.
 * @text_content: string to be written to the new file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
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

	fd = open(filename, O_WRONLY | O_APPEND);
	wc = write(fd, text_content, count);
	close(fd);

	if (fd == -1 || wc == -1)
		return (-1);

	return (1);
}
