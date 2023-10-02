#include "main.h"

/**
 * append_text_to_file - func that append a str in a given file
 * @filename: a ptr to the file name
 * @text_content: ptr to the string should append to the file
 * Return: 1 otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content)
		for (len = 0; text_content[len] ;)
			len++;
	if (write(fd, text_content, len) == -1)
		return (-1);
	close(fd);

	return (1);
}
