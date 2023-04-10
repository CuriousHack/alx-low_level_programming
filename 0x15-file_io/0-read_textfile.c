#include "main.h"

/**
 * read_textfile - reads a text file and prints the letter
 * @filename: filename.
 * @letters: numbers of letter printed.
 *
 * Return: numbers of letter printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	ssize_t nread, nwrite;
	char *buf;

	if (!filename)
		return (0);

	a = open(filename, O_RDONLY);

	if (a == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nread = read(a, buf, letters);
	nwrite = write(STDOUT_FILENO, buf, nread);

	close(a);

	free(buf);

	return (nwrite);
}
