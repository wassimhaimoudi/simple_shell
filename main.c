#include "main.h"
/**
 * main - entry point.
 *
 * @argc: The number of arguments
 * @argv: A pointer to strings.
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	int mode = isatty(0);
	char **argt = NULL;
	char *prompt = "(WXYshell) $ ", *delim = " \n", numc;
	char *buffer = NULL, *buffer_copy = NULL, *token = NULL;
	size_t nbuffer = 0;
	ssize_t chars_r;
	int i, count = 0, ntokens;

	errno = 0;
	(void)argc;
	while (1)
	{
		count++;
		if (mode == 1)
		{
			write(1, prompt, 13);
			fflush(stdout);
		}

		chars_r = getline(&buffer, &nbuffer, stdin);
		/*chars_r = _getline(&buffer, &nbuffer, stdin); */
		if (chars_r == -1)
		{
			free(buffer);
			/*perror("\n\nexiting WXYshell...");*/
			exit(errno);
		}
		handle_comment(buffer);
		buffer_copy = malloc(sizeof(char) * chars_r + 1);
		memfch(buffer_copy);
		_strcpy(buffer_copy, buffer);
		ntokens = calc_tokens(buffer, delim) + 1;
		argt = (char **)malloc(sizeof(char *) * ntokens);
		token = strtok(buffer_copy, delim);
		for (i = 0; token != NULL; i++)
		{
			argt[i] = (char *)malloc(sizeof(char) * strlen(token) + 1);
			_strcpy(argt[i], token);
			token = strtok(NULL, delim);
		}
		argt[i] = NULL;
		/* argt = buffCopy_token(buffer_copy); */
		if (argt[0] == NULL)
		{
			free(argt);
			continue;
		}
		if (access(argt[0], X_OK) == -1)
		{
			numc = count + '0';
			errorp(argv[0], numc, argt[0]);
			free_2d_array(ntokens, argt);
			errno = 127;
			continue;
		}
		exe_cmd(argt, argv);
		free_2d_array(ntokens, argt);
		free(buffer_copy);
		free(buffer);
		buffer_copy =  NULL;
		buffer = NULL;
	}
	return (errno);
}
