#ifndef SHELL_H
#define SHELL_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define BUFFER_SIZE 64


extern int i;

/* Function prototypes */
void execute_command(char **args);
void free_args(char **args);
char *read_input(void);
void tokenize_input(char *input, char ***args);
int is_builtin(char **args);
void execute_builtin(char **args);
char *_getenv(const char *name);

#endif /* SHELL_H */
