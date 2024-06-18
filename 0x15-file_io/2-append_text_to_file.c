#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: additional content
 * Return: required output
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fn;
	int dlet;
	int dwr;

	if (!filename)
		return (-1);

	fn = open(filename, O_WRONLY | O_APPEND);

	if (fn == -1)
		return (-1);

	if (text_content)
	{
		for (dlet = 0; text_content[dlet]; dlet++)
			;

		dwr = write(fn, text_content, dlet);

		if (dwr == -1)
			return (-1);
	}

	close(fn);

	return (1);
}
