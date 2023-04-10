#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: added content
 *
 * Return: 1 if the file exists. -1 if the fails does not exist or fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fn;
	int nl;
	int rwr;

	if (!filename)
		return (-1);

	fn = open(filename, O_WRONLY | O_APPEND);

	if (fn == -1)
		return (-1);

	if (text_content)
	{
		for (nl = 0; text_content[nl]; nl++)
			;

		rwr = write(fn, text_content, nl);

		if (rwr == -1)
			return (-1);
	}

	close(fn);

	return (1);
}
