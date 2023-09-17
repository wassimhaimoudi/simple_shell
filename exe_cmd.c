#include "main.h"

/**
 * exe_cmd - executes a command.
 * @argt: array of tok strings
 * @argv: array of command line argumments
 * Return: status of the child
 */

int exe_cmd(char **argt, char **argv)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == -1)
	{
		perror(argv[0]);
		exit(-1);
	}
	else if (pid == 0)
	{
		execve(argt[0], argt, environ);
		/* cmd_path = join_cmd(command); */
		perror(argv[0]);
		exit(2);
	}
	else
	{
		wait(&status);
		if (WIFEXITED(status))
			status = WEXITSTATUS(status);
		errno = status;
	}
	return (status);
}
