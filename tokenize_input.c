#include "shell.h"

void tokenize_input(char *input, char ***args)
{
	char *token;
	int i = 0;

	*args = malloc(sizeof(char *) * BUFFER_SIZE);
	if (*args == NULL)
	{
	perror("Error");
	exit(EXIT_FAILURE);
	}

	token = strtok(input, " \t\n");
	while (token != NULL)
	{
	(*args)[i] = strdup(token);
	if ((*args)[i] == NULL)
	{
	perror("Error");
	free_args(*args);
	free(input);
	exit(EXIT_FAILURE);
	}
	i++;
	token = strtok(NULL, " \t\n");
	}
	(*args)[i] = NULL;
}
