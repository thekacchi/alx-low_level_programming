#include "main.h"

/**
 * append_text_to_file - Appenda text at the end of file
 * @filename: pointer to the name of the file
 * @text_content: String to add to the end of the file
 * Return: -1 if the function fails or filename is Null
 * -1 if the file does not exist or user lacks write permission
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

	close(openFile);

	return (1);
}
