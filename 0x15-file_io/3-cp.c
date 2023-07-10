#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - copy the content of a file to another file.
 * @argc: number of arguments passed to the command line
 * @argv: array containing command line arguments
 *
 * Return: 0 (success). Any other value indicates failure
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	ssize_t fin, fout, rc, wc;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fin = open(argv[1], O_RDONLY);
	if (!fin)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fout = open(argv[2], O_WRONLY | O_APPEND | O_TRUNC | O_CREAT, 0000600);
	if (!fout)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		_close(fin);
		exit(99);
	}

	rc = sizeof(buffer);
	while (rc == (ssize_t)sizeof(buffer))
	{
		rc = read(fin, buffer, sizeof(buffer));
		if (!rc)
			break;

		if (rc == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			_close(fout);
			_close(fin);
			exit(98);
		}

		wc = write(fout, buffer, rc);
		if (wc == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			_close(fout);
			_close(fin);
			exit(99);
		}
	}

	close(fin);
	close(fout);

	return (0);
}

/**
 * _close - close a file
 * @fd: the descriptor of the file
 */
void _close(ssize_t fd)
{
	ssize_t status;

	status = close(fd);
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", fd);
		exit(100);
	}
}
