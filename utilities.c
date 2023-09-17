#include "main.h"

/**
 * free_2d_array - frees a dynamically allocated array.
 * @array: the 2d array to be freed.
 * @len: number of lines in the array.
 *
 * Return: Void.
 */

void free_2d_array(int len, char **array)
{
	int i = 0;

	if (array)
	{
		for (; i < len; i++)
		{
			free(array[i]);
		}
		free(array);
	}
}

/**
 * memfch - checks the state of the memory allocation
 * @memory: the memory we want to check.
 *
 * Return: -1
 */

int memfch(char *memory)
{
	if (memory == NULL)
	{
		free(memory);
		perror("Cannot allocate memory now. Try later...\n");
		return (-1);
	}
	return (1);
}
/**
 * memfchs - checks the state of the memory allocaion
 * @memory: the memory to be checked.
 *
 * Return: Always NULL
 */
char *memfchs(char *memory)
{
	if (memory == NULL)
	{
		free(memory);
		perror("Cannot allocate memory now. Try later...\n");
		return (NULL);
	}
	return (NULL);
}
