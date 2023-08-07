#include "main.h"

/**
 * read_textfile - reads a text file and prints it to standard outpur
 * @filename: the file to be read
 * @letters: nimber of characters read from file
 * Return: Actual number of bytes printed,
 * 0 when file is null or funrcion fails
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
