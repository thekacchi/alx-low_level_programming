#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a textfile and prints it to std output
 * @filename: file being read
 * @letters: number fo letter sto be read
 * Return: w- actual number of bytes printed
 *  returns 0 when file is NULL or function fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t openFile;
	ssize_t readFile;
	ssize_t writeFile;

	openFile = open(filename, O_RDONLY);
	if (openFile == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	readFile = read(openFile, buffer, letters);

	writeFile = write(STDOUT_FILENO, buffer, readFile);

	free(buffer);
	close(openFile);
	return (writeFile);
}
