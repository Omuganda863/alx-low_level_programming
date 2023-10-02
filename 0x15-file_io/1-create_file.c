#include "main.h"

/**
 * create_file - touchFile
 * @filename: A pointer*
 * @text_content: A pointer*
 *
 * Return: I -1/   1.
 */
int create_file(const char *filename, char *text_content)
{
	int fwd, win, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fwd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	win = write(fwd, text_content, length);

	if (fwd == -1 || win == -1)
		return (-1);

	close(fwd);

	return (1);
}
