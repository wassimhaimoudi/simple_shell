#include "main.h"

/**
 * _strtok - A custom string tokenization function.
 * @str: The string to tokenize.
 * @delim: The delimiter characters.
 * Return: Pointer to the next token or NULL if no more tokens are found.
 */
char *_strtok(char *str, char *delim)
{
	static char *lastToken;
	char *start;
	char *end;

	if (str != NULL)
		lastToken = str;
	if (str == NULL)
		return (NULL);
	start = lastToken;
	while (*start && _strchr(delim, *start))
		++start;
	if (!*start)
	{
		lastToken = NULL;
		return (NULL);
	}

	end = start + 1;

	while (*end && !_strchr(delim, *end))
		++end;
	if (*end)
	{
		*end = '\0';
		lastToken = end + 1;
	}
	else
	{
		lastToken = NULL;
	}
	return (start);
}

/**
 * _strncmp - compares up to n characters in two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes to compare
 * Return: 0 if the strings are equal, an integer number otherwise
 */
int _strncmp(char *s1, char *s2, size_t n)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
		if (s2[i] == 0 || s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
