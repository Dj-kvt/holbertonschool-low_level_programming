#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file to append text to
 * @text_content: the content to append to the file (NULL-terminated string)
 *
 * Return: 1 on success, -1 on failure (e.g., file doesn't exist,
 *         no permission to write, etc.)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytesWritten, length = 0;

	/* If filename is NULL, return -1 */
	if (filename == NULL)
		return (-1);

	/* If text_content is not NULL, calculate its length */
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	/* Open the file in append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1) /* If file doesn't exist or can't be opened, return -1 */
		return (-1);

	if (text_content != NULL)
	{
		bytesWritten = write(fd, text_content, length);
		if (bytesWritten == -1) /* If writing fails, return -1 */
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1); /* Success */
}
