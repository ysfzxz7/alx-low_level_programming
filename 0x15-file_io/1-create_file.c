#include "main.h"

/**
 * create_file - func that creat a file
 * @filename: ptr that contain the name of the file
 * @text_content: ptr to the str that the file should contain
 * Return: 1 otherwise 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd, status = 1, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		for ( ; text_content[len]; )
			len++;
	if (write(fd, text_content, len) == -1)
		return (-1);
	close(fd);

	return (status);
}
