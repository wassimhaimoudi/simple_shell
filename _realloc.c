#include "main.h"

/**
 * _realloc - function that takes buffer and increase it's size
 * @old_buffer: old data of the buffer
 * @old_size: size of the buffer before update
 * @new_size: size of the buffer after
 *
 * Return: buffer after it's being allocated, NULL on failure
 */
char *_realloc(void *old_buffer, size_t old_size, size_t new_size)
{
	char *buffer = NULL;
	char *char_buffer = NULL;
	size_t i;

	if (new_size == 0)
	{
		free(old_buffer);
		return (NULL);
	}
	if (!old_buffer)
		return (NULL);
	buffer = malloc(sizeof(char) * (new_size + 1));

	if (!buffer)
		return (NULL);
	char_buffer = (char *)old_buffer;
	i = 0;
	while (char_buffer && i < old_size)
	{
		buffer[i] = char_buffer[i];
		i++;
	}

	while (i < new_size)
	{
		buffer[i] = 0;
		i++;
	}
	buffer[i] = 0;
	free(old_buffer);
	return (buffer);
}
