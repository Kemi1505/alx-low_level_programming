#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: the filename
 * @letters: no of letters to be printed
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fn;
	ssize_t drd, dwr;
	char *buf;

	if (!filename)
		return (0);

	fn = open(filename, O_RDONLY);

	if (fn == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	drd = read(fn, buf, letters);
	dwr = write(STDOUT_FILENO, buf, drd);

	close(fn);

	free(buf);

	return (dwr);
}
