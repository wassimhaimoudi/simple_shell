#include "main.h"

/**
 * errorp - prints error messqge to the stderr
 * @name:  programme name
 * @numc: input count.
 * @cmd: user input.
 *
 */
void errorp(char *name, char numc, char *cmd)
{
	_puts(name);
	_puts(": ");
	_putchar(numc);
	_puts(": ");
	_puts(cmd);
	_puts(": not found");
	_putchar('\n');
}

/**
 * _puts - prints a string.
 * @string: the string to be printed.
 *
 * Return: Void.
 */
void _puts(char *string)
{
	int idx;

	for (idx = 0; string[idx]; idx++)
		_putchar(string[idx]);
}
