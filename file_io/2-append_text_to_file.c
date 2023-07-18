#include "main.h"

/**
 * append_text_to_file - appends input text to specified file
 * @filename: object file
 * @text_content: text to be input to file
 * Return: 1 upon success, -1 upon file unspecified or open/write failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x = 0, strlen_sub = 0;

	if (filename == NULL)
		return (-1);

	x = open(filename, O_WRONLY | O_APPEND);

	if (x == -1)
		return (-1);

	if (text_content)
	{
		for (; text_content[strlen_sub]; strlen_sub++)
			;

		if (write(x, text_content, strlen_sub) == -1)
			return (-1);
	}

	close(x);

	return (1);
}
