#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fn;
	int nl;
	int rwr;

	if (!filename)
		return (-1);

	fn = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fn == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nl = 0; text_content[nl]; nl++)
		;

	rwr = write(fn, text_content, nl);

	if (rwr == -1)
		return (-1);

	close(fn);

	return (1);
}
