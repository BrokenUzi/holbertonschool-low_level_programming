#include "main.h"

/**
 * create_file - creates file with input text
 * @filename: filename of created file
 * @text_content: intended content of file
 * Return: 1 upon success, -1 upon NULL filename or create/write failure
 */

int create_file(const char *filename, char *text_content)
{
	int x = 0, strlen_sub = 0;
	ssize_t out = 0;

	if (filename == NULL)
		return (-1);

	x = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (x == -1)
		return (-1);

	if (text_content)
	{
		for (; text_content[strlen_sub]; strlen_sub++)
			;

		out = write(x, text_content, strlen_sub);

		if (out == -1 || out != strlen_sub)
			return (-1);
	}

	close(x);

	return (1);
}
