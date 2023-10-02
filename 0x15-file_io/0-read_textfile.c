#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- readfile
 * @filename: TextFile
 * @letters: NumberOfLetters
 * Return: bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fwd;
	ssize_t win;
	ssize_t a;

	fwd = open(filename, O_RDONLY);
	if (fwd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	a = read(fwd, buffer, letters);
	win = write(STDOUT_FILENO, buffer, a);

	free(buffer);
	close(fwd);
	return (win);
}
