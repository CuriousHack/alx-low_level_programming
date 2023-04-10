#include "main.h"

/**
 * create_file - create a file
 * @filename: filename.
 * @text_content: content written in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fid;
	int letter;
	int rwrite;

	if (!filename)
		return (-1);

	fid = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fid == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letter = 0; text_content[letter]; letter++)
		;

	rwrite = write(fid, text_content, letter);

	if (rwrite == -1)
		return (-1);

	close(fid);

	return (1);
}
