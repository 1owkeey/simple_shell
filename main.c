#include "shell.h"

int main(void)
	{
	char *line;
	char **args;
	int i = 0;

	while (1)
	{
	printf("$ "); /* Prompt symbol */

	/* Read user input */
	line = read_input();

	/* Check for end of file (Ctrl+D) */
	if (!line)
	{
	printf("\n");
	free(line);
	break;
	}

	/* Tokenize input */
	tokenize_input(line, &args);

	/* Execute the command or built-in */
	if (!is_builtin(args))
	{
	execute_command(args);

	/* Free allocated memory */
	free_args(args);
	free(line);
	}

	{return} 0;
}
