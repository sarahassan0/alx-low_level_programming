/*
 * Arguments
 * task 2. command line to av
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * main - splits a command and returns an array of each word of the command.
 *        prints it on the next line.
 *
 * Return: 0 on success
 */

char **split_cmd(char *str);

int main(void)
{

	char *lineptr = NULL;
	size_t len = 0;
	ssize_t read;
	char **cmds;
	int i;

	printf("$ ");
	while ((read = getline(&lineptr, &len, stdin)) != -1)
	{
		lineptr[read - 1] == '\n' ? lineptr[read - 1] = '\0' : 0; /*remove the line*/
		cmds = split_cmd(lineptr);
		for (i = 0; cmds[i] != NULL; i++)
		{
			printf("%s\n", cmds[i]);
		}
		printf("$ ");

	}
	free(cmds);
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
