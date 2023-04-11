#include "main.h"

/**
 * append_text_to_file - appends text at the end of a valid file
 * @filename: filname.
 * @text_content: added content
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fid;
	int letter;
	int rwrite;

	if (!filename)
		return (-1);

	fid = open(filename, O_WRONLY | O_APPEND);

	if (fid == -1)
		return (-1);

	if (text_content)
	{
		for (letter = 0; text_content[letter]; letter++)
			;

		rwrite = write(fid, text_content, letter);

		if (rwrite == -1)
			return (-1);
	}

	close(fid);

	return (1);
}
