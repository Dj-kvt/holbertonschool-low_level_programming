#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters it could read and print
 *         or 0 if the file cannot be opened, read, or written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytesRead, bytesWritten;
	char *buffer;

	/* If filename is NULL, return 0 as per the requirement */
	if (filename == NULL)
		return (0);

	/* Open the file with read-only permission */
	fd = open(filename, O_RDONLY);
	if (fd == -1) /* Check if file open failed */
		return (0);

	/* Allocate memory for the buffer to hold the data */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL) /* If memory allocation failed, return 0 */
	{
		close(fd);
		return (0);
	}

	/* Read up to 'letters' bytes from the file into the buffer */
	bytesRead = read(fd, buffer, letters);
	if (bytesRead == -1) /* If reading failed, return 0 */
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Write the data from the buffer to standard output (stdout) */
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten == -1 || bytesWritten != bytesRead) /* Check if writing failed or incomplete */
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Free allocated memory and close the file descriptor */
	free(buffer);
	close(fd);

	/* Return the number of bytes actually read and written */
	return (bytesRead);
}
