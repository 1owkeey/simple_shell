#include "shell.h"

int is_builtin(char **args)
{
	if (args[0] == NULL)
	{
	return (1); /* Empty command */
	}

	if (strcmp(args[0], "exit") == 0 || strcmp(args[0], "env") == 0)
	{
	/* Handle exit and env built-ins */
	execute_builtin(args);
	return (1);
	}

	return (0); /* Not a built-in command */
}

