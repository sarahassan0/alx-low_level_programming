/*
 * Arguments
 * task 1. Read line
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints "$ ", wait for the user to enter a command,
 *        prints it on the next line.
 *
 * Return: 0 on success
 */


int main(void)
{

	char *lineptr = NULL;
	size_t len = 0;
	ssize_t read;

	printf("$ ");
	while ((read = getline(&lineptr, &len, stdin)) != -1)
	{
		printf("%s", lineptr);
		printf("$ ");
	}

	free(lineptr);
	return (0);

}
