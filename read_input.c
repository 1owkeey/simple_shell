#include "shell.h"

char *read_input(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	read = getline(&line, &len, stdin);

	if (read == -1)
	{
	if (feof(stdin))
	{
	free(line);
	{return} NULL; /* End of file (Ctrl+D) */
	}
	else
	{
	perror("Error reading input");
	exit(EXIT_FAILURE);
	}
	}

	{return} line;
}
