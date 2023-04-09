#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int sf, x, y;
	char *buf;

	if (!filename)
		return (0);

	sf = open(filename, O_RDONLY);

	if (sf == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	x = read(sf, buf, letters);
	y = write(STDOUT_FILENO, buf, x);

	close(sf);

	free(buf);

	return (y);
}
