#include "main.h"

/**
 * buffCopy_token - function tokenizes buff copy
 * @buffer_copy: string argument
 * Return: a double pointer
 */
char **buffCopy_token(char *buffer_copy)
{
	char *delim = " \n";
	int ntokens = calc_tokens(buffer_copy, delim) + 1;
	int i = 0;
	char *token = NULL;
	char **tokens = NULL;

	tokens = (char **)malloc(sizeof(char *) * ntokens);
	if (tokens == NULL)
	{
		free(tokens);
		return (NULL);
	}
	token = strtok(buffer_copy, delim);

	for (i = 0; token != NULL; i++)
	{
		tokens[i] = token;
		token = strtok(NULL, delim);
	}
	tokens[i] = NULL;
	return (tokens);
}
/**
 *calc_tokens - function that calculates the number of tokens
 *@str: string to be tok'ed
 *@delim: delimiter of the tokenization
 *Return: number of  tokens that are extracted
 */
int calc_tokens(char *str, char *delim)
{
	int ntoken = 0;
	char *_token = NULL;

	_token = strtok(str, delim);
	while (_token)
	{
		ntoken++;
		_token = strtok(NULL, delim);
	}
	return (ntoken);
}
