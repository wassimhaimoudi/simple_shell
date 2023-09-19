#include "main.h"

/**
 * _setenv - adds a new variable to the environ
 * @name: the name of the environement
 * @value: the value of the variable.
 * @overwrite: the overwrite flag
 *
 * Return: 0 on success, -1 on failure.
 */

int _setenv(char *name, char *value, int overwrite)
{
	int i, len;
	char *newVariable = NULL, *temp = NULL;

	len = _strlen(name) + _strlen(value) + 2;
	if (!name || !value)
		return (-1);

	for (i = 0; environ[i]; i++)
	{
		if (strncmp(environ[i], name, strlen(name)) == 0)
		{
			if (overwrite)
			{
				newVariable = (char *)malloc(sizeof(char) * len);
				strcpy(newVariable, name);
				strcat(newVariable, "=");
				strcat(newVariable, value);
				temp = environ[i];
				environ[i] = newVariable;
				free(temp);
				return (0);
			}
			return (0);
		}
	}
	newVariable = (char *)malloc(sizeof(char) * len);
	strcpy(newVariable, name);
	strcat(newVariable, "=");
	strcat(newVariable, value);
	environ[i] = newVariable;
	environ[i + 1] = NULL;
	return (0);
}

/**
 * _unsetenv - removes a variable from the environ.
 * @name: the variable name.
 *
 * Return: 0 on success, -1 on failure.
 */
int _unsetenv(char *name)
{
	int i, envCount;

	if (name == NULL)
		return (-1);

	for (envCount = 0; environ[envCount]; envCount++)
	;
	for (i = 0; environ[i]; i++)
	{
		if (strncmp(environ[i], name, strlen(name)) == 0)
		{
			char *temp = environ[i];
			int j;

			for (j = i; j < envCount; j++)
				environ[j] = environ[j + 1];
			/* to be continued here*/

			free(temp);
			return (0);
		}
	}
	return (0);
}
