#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file and writes text to it.
 * @filename: the name of the file to create
 * @text_content: the content to write to the file (NULL-terminated string)
 *
 * Return: 1 on success, -1 on failure (e.g., file can't be created,
 *         can't write to file, etc.)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytesWritten, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	/* Create the file with rw- permissions (0664) */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd == -1)
		return (-1);

	/* If text_content is not NULL, write to the file */
	if (text_content != NULL)
	{
		bytesWritten = write(fd, text_content, length);
		if (bytesWritten == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
