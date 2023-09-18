#include "main.h"

/**
 * _getline - reads an entire line from the buffer
 * @lineptr: the line to be read
 * @n: the length of the buffer
 * @stream: the file descriptor.
 * Return: nuber of chars read.
 */
ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	int chars_read = 0;
	char *line = NULL, *new_line = NULL;

	if (*lineptr == NULL || *n == 0)
	{
		*n = 1026;
		line = (char *)malloc(sizeof(char) * (*n));

		if (line == NULL)
		{
			return (-1);
		}
		*lineptr = line;
	}
	if (stream == stdin)
	{
		chars_read = read(0, *lineptr, *n);

		if (chars_read == -1)
		{
			return (-1);
		}
		if (chars_read >= (int)*n)
		{
			new_line = _realloc(*lineptr, *n, chars_read);

			if (new_line == NULL)
			{
				free(*lineptr);
				return (-1);
			}
			*lineptr = new_line;
			*n = (size_t)chars_read;
		}
	}
	return (chars_read);
}
