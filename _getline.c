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
	ssize_t chars_read = 0;
	char *line = NULL;

	(void)line;
	/*if (*lineptr == NULL || *n == 0)
	{
		*n = 1026;
		line = (char *)malloc(sizeof(char) * (*n));
		memfchs(line);
		*lineptr = line;
	}*/
	if (stream == stdin)
	{
		chars_read = read(0, *lineptr, *n);

		if (chars_read == -1)
			return (-1);
	}
	/* need to handle realloc here */
	return (chars_read);
}
