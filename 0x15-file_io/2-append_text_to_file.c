#include "main.h"

/**
 *append_text_to_file - apped some text to an existing file
 *@filename: the file name
 *@text_content: the text wants to be added
 *Return: if success 1 otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filed, lenght = 0;

	if (!filename)
		return (-1);
	filed = open(filename, O_WRONLY | O_APPEND);
	if (text_content)
		for (lenght = 0; text_content[lenght]; )
			lenght++;
	if (write(filed, text_content, lenght) == -1)
		return (-1);
	close(filed);
	return (1);
}
