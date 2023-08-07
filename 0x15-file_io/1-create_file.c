#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the name of the file to be creatwd
 * @text_content: pointer to string to wrire the file
 */
int create_file(const char *filename, char *text_content)
{
	int fileDescriptor, writeFile, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fileDescriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writeFile = write(fileDescriptor, text_content, len);

	if (fileDescriptor == -1 || writeFile == -1)
		return (-1);

	close(fileDescriptor);

	return (1);
}
