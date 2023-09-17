#include "main.h"

/**
 * _getenv - gets an environment variable from the environ array.
 * @variableName: the name of the variable.
 *
 * Return: The whole variable if it exists, NULL on failure.
 */
char *_getenv(char *variableName)
{
	int i;

	for (i = 0; environ[i]; i++)
	{
		if (_strncmp(environ[i], variableName, _strlen(variableName)) == 0)
			return (environ[i]);
	}
	return (NULL);
}
