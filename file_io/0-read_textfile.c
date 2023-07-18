#include "main.h"

/**
 * read_textfile - prints specified amount of letters from filename to stdout
 * @filename: input file
 * @letters: number of characters from input file to be printed
 * Return: number of letters successfully printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int x = 0;
	char *y = 0;
	ssize_t in = 0, out = 0;

	if (filename == NULL)
		return (0);

	x = open(filename, O_RDONLY);

	if (x == -1)
		return (0);

	y = malloc(sizeof(char) * letters);

	if (y == NULL)
	{
		close(x);
		return (0);
	}

	in = read(x, y, letters);

	close(x);

	if (in == -1)
		return (0);

	out = write(STDOUT_FILENO, y, in);

	free(y);

	if (out != in)
		return (0);

	return (out);
}
