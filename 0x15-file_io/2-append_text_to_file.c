#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: he NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	register int _fl, _rbt, rbt_len = 0;

	if (!(filename))
	{
		return (-1);
	}
	_fl = open(filename, O_WRONLY, O_APPEND);
	if (_fl == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[rbt_len])
		{
			rbt_len++;
		}
		_rbt = write(_fl, text_content, rbt_len);
		if (_rbt == -1)
		{
			return (-1);
		}
	}
	close(_fl);
	return (1);
}
