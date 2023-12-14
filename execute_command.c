#include "shell.h"

void execute_command(char **args)
{
	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
	/* Child process */
	execvp(args[0], args);
	perror(args[0]); /* Exec failed, print error message */
	_exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
	perror("Fork error");
	}
	else
	{
	int status;

	waitpid(pid, &status, 0);

}
