/*
 * super simple shell exercise
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - super simple shell that can run commands with their full path,
 * without any argument.
 *
 * Return: 0 on success
 */

char **split_cmd(char *str);

int main(void)
{

	char *lineptr = NULL;
	size_t len = 0;
	ssize_t read;
	char **cmd;
	pid_t pid;
	int status;

	printf("$ ");
	while ((read = getline(&lineptr, &len, stdin)) != -1)
	{
		lineptr[read - 1] == '\n' ? lineptr[read - 1] = '\0' : 0; /*remove the line*/
		cmd = split_cmd(lineptr);
		pid = fork();
		if (pid == -1)
		{
			perror("fork");
			exit(1);
		} else if (pid == 0)
		{
			if (execv(cmd[0], cmd) == -1)
			{
				perror("execv");
				exit(1);
			}
		} else
		{
			if (wait(&status) == -1)
			{
				perror("wait");
				exit(1);
			}
		}

		printf("$ ");

	}
	free(cmd);
	free(lineptr);
	return (0);


}

char **split_cmd(char *str)
{

	char **words;
	char *str_cpy;
	char *delim = " ";
	char *token;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	str_cpy = strdup(str);

	words = malloc(sizeof(char *) * (i + 1));
	if (words == NULL)
	{
		perror("malloc failed");
		exit(1);
	}
	token = strtok(str_cpy, delim);
	while (token != NULL)
	{
		i++;
		words = realloc(words, sizeof(char *) * (i + 1));
		if (words == NULL)
		{
			perror("malloc failed");
			exit(1);
		}

		words[i - 1] = strdup(token);
		token = strtok(NULL, delim);
	}
	words[i] = NULL;
	free(str_cpy);
	return (words);
}
