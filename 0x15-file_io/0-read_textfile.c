#include <stdio.h>
#include "main.h"

/**
 *read_textfile - a func that read a text from a file
 *@filename: a ptr to the file name
 *@letters: the number of letter nedds to be readed
 *Return: 0 if fails,, otherwise return the number of numbers readed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t counter = 0, rest, read_flag = 0;
	size_t  lenght;
	int fd;
	char *buf;

	rest = letters >= BUFF_SIZE ? BUFF_SIZE : letters;
	if (!filename)
		return (0);
	buf = malloc(BUFF_SIZE * sizeof(char));
	if (!buf)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	do {
	if (rest < BUFF_SIZE)
	{
		close(fd);
		return (0);
	}
	else
	read_flag = read(fd, buf, rest);
		if (read_flag == -1)
	{
		close(fd);
		return (0);
	}
	lenght = (size_t) read_flag;
	counter += lenght;
	rest = letters - counter;
	if (write(STDOUT_FILENO, buf, lenght) == -1)
	{
		close(fd);
		return (0);
	}
	} while (((size_t) counter) < letters && lenght > 0);
	close(fd);
	return (counter);
}
