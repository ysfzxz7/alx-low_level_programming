#include "main.h"

/**
 *creat_file - a func that creat a func
 *@filename: the file name
 *@text_content: the content of the file,
 *Return: the status if done 1 if not -1
 */

int create_file(const char *filename, char *text_content)
{
	int filed, sts = 1, len = 0;

	if (filename == NULL)
		return (-1);
	filed = open(filename, O_CREAT | O_RDWR | O_TRUNC, 06000);
	if (filed == -1)
		return (-1);
	if (text_content)
		for ( ; text_content[len]; )
			len++;
	if (write(fd, text_content, len) == -1)
		return (-1);
	close(filed);
	return (sts)
}
