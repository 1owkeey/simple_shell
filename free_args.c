#include "shell.h"

void free_args(char **args)
{
	int i;

	for (i = 0; args[i] != NULL; i++)
	{
	free(args[i]);
	}
	free(args);
}
