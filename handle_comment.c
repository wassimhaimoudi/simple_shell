#include "main.h"

/**
 * handle_comment - function that handles comments
 * @cmd: the user input.
 *
 * Return: Void.
 */
void handle_comment(char *cmd)
{
	int i;

	for (i = 0; cmd[i]; i++)
	{
		if (i > 0 && cmd[i] == '#' && cmd[i - 1] != ' ')
			break;

		if (cmd[i] == '#')
		{
			cmd[i] = '\0';
			break;
		}

	}
}
