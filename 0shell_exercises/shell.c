
/*
 * super simple shell exercise another solution
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#define MAX_ARGS 10

/**
 * main - super simple shell that can run commands with their full path,
 * without any argument.
 *
 * Return: 0 on success
 */

int main(void)
{
	char *command = NULL;
	size_t command_size = 0;
	pid_t pid;
	char *args[MAX_ARGS];
	int status;

	while (1)
	{
		printf("shell> ");
		if (getline(&command, &command_size, stdin) == -1)
		{
			perror("getline");
			exit(1);
		}
		command[strcspn(command, "\n")] = '\0';
		char *token;
		int i = 0;

		token = strtok(command, " ");
		while (token != NULL && i < MAX_ARGS)
		{
			args[i++] = token;
			token = strtok(NULL, " ");
		}
		args[i] = NULL;

		pid = fork();
		if (pid == -1)
		{
			perror("fork");
			exit(1);
		}
		else if (pid == 0)
		{
			if (execv(args[0], args) == -1)
			{
				perror("execv");
				exit(1);
			}
		}
		else
		{
			if (wait(&status) == -1)
			{
				perror("wait");
				exit(1);
			}
		}
	}
	free(command);
	return (0);
}
