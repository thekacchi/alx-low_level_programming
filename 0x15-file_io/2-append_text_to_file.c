#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: pointer to name of the file
 * @text_content: String to add to the end of the file
 * Return: -1 if function fails or filename is NULL
 * -1 if file does not exist or user lacks write permissions
 *  otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int openFile, writeFile, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	openFile = open(filename, O_WRONLY | O_APPEND);

	writeFile = write(openFile, text_content, len);

	if (openFile == -1 || writeFile == -1)
		return (-1);

	close (0);

	return (1);
}
