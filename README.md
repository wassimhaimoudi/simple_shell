0. Betty would be proud
mandatory
Write a beautiful code that passes the Betty checks

1. Simple shell 0.1
mandatory
Write a UNIX command line interpreter.

Usage: simpleshell
Your Shell should:

Display a prompt and wait for the user to type a command. A command line always ends with a new line.
The prompt is displayed again each time a command has been executed.
The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
The command lines are made only of one word. No arguments will be passed to programs.
If an executable cannot be found, print an error message and display the prompt again.
Handle errors.
You have to handle the “end of file” condition (Ctrl+D)
You don’t have to:

use the PATH
implement built-ins
handle special characters : ", ', `, \, *, &, #
be able to move the cursor
handle commands with arguments
execve will be the core part of your Shell, don’t forget to pass the environ to it…

2. Simple shell 0.2
mandatory
Simple shell 0.1 +

Handle command lines with arguments

3. Simple shell 0.3
mandatory
Simple shell 0.2 +

Handle the PATH
fork must not be called if the command doesn’t exist

4. Simple shell 0.4
mandatory
Simple shell 0.3 +

Implement the exit built-in, that exits the shell
Usage: exit
You don’t have to handle any argument to the built-in exit
#include "sshell.h"
/**
*_strtok - function returns string tokens from a string
*@str: an array of strings
*@delim: a constant separator
*/
char *_strtok(char *str[], const char *delim)
/*char *_strtok(char **restrict str, const char *restrict delim)*/
{
	size_t xyz = 4;
	int i = 0;
	*str = _strtok

	str = malloc(sizeof(char) * xyz); /*str = malloc(strlen(str) * xyz);*/

	if (delim == NULL || str == NULL)
	{
		_strtok(NULL);
		_exit(1);
	}
	while (delim != NULL && str != NULL)
	{
		if (str[i] != NULL || (!delim))
		{
			/*_strtok(str[i], delim);*/
			return (str[i]);
		}

		else if (str[i] = '\0' || (!delim))
		{
			char *tok = _strtok(NULL, delim);
			return (str[i + 1]);
			/*return (_strtok);*/
		}
	}
	for (i = 1; tok == NULL; str[i]++)
	{
		return (NULL);
	}
	free(str);
/*_strtok(str[])*/ return (_strtok);
}



#include "sshell.h"
/**
*
*
*
*/
int main(void)
{
	pid_t pid;
	pid = fork();

	if (pid == 0)
	{
		printf("This is the pid: %d", pid);
	}
	return (0);
}

#!/bin/bash
$echo = var
(cat ($var="/proc/sys/kernel/pid_max"))

int main(int argc, char* argv[])
{
	__unused attribute ((argc))__
	int i = 0;

	if (argv != NULL)
	{
		printf("%s\n", argv[i]);
		i++
	}
	else if (argv = '\0')
	printf(%n);
}

#include "sshell.h"
int main(void)
{
	pid_t pid;
	char *buffer;
	char *prompt = "$ ";
	ssize_t prompt_buffer;
	size_t buffsize = 16;

	ssize_t read_var, read_pr;

	prompt_buffer = malloc(3);
	buffer = malloc(sizeof(*char)* buffsize);

	read_var = read()
	write(0, buffer, read_var);

	 if (!buffer)
                return (-1);

        write_var = write(1, prompt, prompt_buffer);

        if (write_var == -1 || read_var == -1)
                return (-1);

        //if (read_pr == -1)
                //return (-1);

	if (pid != 0)
	{
		wait(pid);
	}

	else
	{
			write(0, prompt, prompt_buffer);
			putchar('\n');
			read_var = getline(&buffer, &buffsize, stdin);
			execve_var = execve(argv[2], argv, NULL);

	}

	free(prompt_buffer);
	free(buffer);
}

#include "sshell.h"

int main(void)
{
	char *str;
	size_t buffer_size;
	ssize_t buffsize;
	char *buffer;
	const char delim = " ";

	buffsize = malloc(sizeof(buffer_size));

	str = "This is a string, with a delimiter of type  .";

	write(1, buffer, buffsize);
	buffer = strtok(str, delim);

else if (str[i] = '\0' || (!delim))
		{
			*buffer = strtok(NULL, delim);
			return (str[i + 1]);
			/*return (_strtok);*/
		}
	}
	for (i = 1; buffer == NULL; str[i]++)
	{
		buffer = strtok(NULL, delim);
	}
	return (*buffer);
}
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <syscalls.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <fcntl.h>

int main (int argc, char* argv[])
{
	char *buffer;
	ssize_t buffsize;
	char *command;
	ssize_t write_pr, read_pr, read_var;
	int execve_var, id;

	pid_t pid;
	char *prompt = "$ ";
	//int i, j = 0;
	//extern char **environ = (, , NULL);
	if (argc != 3)
		return (-1);
	argv = {"argv[0]", "ls", NULL};

		buffer = malloc(sizeof(char) * buffsize);
		read_var = read(0, buffer, buffsize);
		write_pr = write(1, prompt, strlen(prompt));
		if (argv[0] != NULL)
		{
			id = fork();
			if (id != 0)
			{
				wait(NULL);
				write_pr = write(1, prompt, strlen(prompt));
			}

			execve_var = execve("/bin/ls", argv, env);
			else
			{
				if (execve_var == -1)
				{
					perror("execution fails");
					exit(1);
				}
				//char *env[] = {"HOME="pathArray_token[j]", "LOGNAME=pathArray_token[j + 1]", NULL};
				char *env[] = {"HOME=/usr/home", "LOGNAME=home", (char *)0 };

				write_pr = write(1, execve_var, read_var);
				//write_pr = write(1, *prompt, strlen(prompt + 1));
				execve_var = execve("/bin/ls", argv, env);
			}
		}
		free(buffer);
		return (0);
}

