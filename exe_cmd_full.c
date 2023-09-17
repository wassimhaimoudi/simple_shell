#include "main.h"

/**
 * exe_cmd_full - executes the command
 * @argt: an array of the user arguments
 * @argv: an array of command line arguments
 * @full_cmd: full command joined with the path
 *
 * Return: void.
 */
int exe_cmd_full(char **argt, char **argv, char *full_cmd)
{
	pid_t pid_num;
	int status;

	pid_num = fork();
	if (pid_num < 0)
	{
		perror(full_cmd);
		exit(-1);
	}
	else if (pid_num == 0)
	{
		execve(full_cmd, argv, environ);
		perror(argv[0]);
		exit(2);
	}
	else
	{
		wait(&status);
		if (WIFEXITED(status))
			status = WEXITSTATUS(status);
		errno = status;

		free(full_cmd);
		free(argt);
	}
	return (status);
}
