#include "shell.h"

void execute_builtin(char **args)
{
	if (strcmp(args[0], "exit") == 0)
	{
	/* Implement the exit built-in */
	free_args(args);
	exit(EXIT_SUCCESS);
	}

	if (strcmp(args[0], "env") == 0)
	{
	/* Implement the env built-in */
	char **env = NULL;

	while (*env != NULL)
	{
	printf("%s\n", *env);
	env++;
	}
	free_args(args);
	return;
	}
}
