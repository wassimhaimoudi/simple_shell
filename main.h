#ifndef MAIN_H
#define MAIN_H
/* include files */
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/syscall.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <fcntl.h>
#include <dirent.h>
#include <errno.h>

/*Global variables */
extern char **environ;

/* functions prototypes */
int _putchar(char);
void _puts(char *);
int _strlen(char *);
char *_strcpy(char *, char *);
int _strcmp(char *, char *);
char *_strcat(char *, char *);
char *_strchr(char *, char);
char *_strtok(char *, char *);
int _strncmp(char *, char *, size_t);
int exe_cmd(char **argt, char **argv);
int exe_cmd_full(char **argt, char **argv, char *full_cmd);
char *get_full_path(char *paths, char *cmd);
ssize_t _getline(char **, size_t *, FILE *);
char *_realloc(void *old_buffer, size_t old_size, size_t new_size);
char *_getenv(char *name);
char **buffCopy_token(char *buffer_copy);
int calc_tokens(char *str, char *delim);
void handle_comment(char *cmd);
void errorp(char *name, char numc, char *cmd);
int memfch(char *memory);
char *memfchs(char *memory);
void free_2d_array(int len, char **array);
void exit_process(int);
#endif
