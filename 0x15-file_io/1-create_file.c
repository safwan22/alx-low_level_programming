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
	int faux, sf, me;

	if (!filename)
		return (-1);

	faux = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (faux == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (sf = 0; text_content[sf]; sf++);

	me = write(faux,  text_content, sf);

	if (me == -1)
		return (-1);

	close(faux);

	return (1);
}
