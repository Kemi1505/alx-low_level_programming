#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content of the file
 * Return: required output
 */
int create_file(const char *filename, char *text_content)
{
	int fn;
	int dlet;
	int dwr;

	if (!filename)
		return (-1);

	fn = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fn == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (dlet = 0; text_content[dlet]; dlet++)
		;

	dwr = write(fn, text_content, dlet);

	if (dwr == -1)
		return (-1);

	close(fn);

	return (1);
}
