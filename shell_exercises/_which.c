/*
 * find a file in the PATH
 * Usage: ./_which filename ...
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>


/**
 * main - find a file in the PATH, my version of built-in <which> command
 * without any argument.
 *
 * Return: 0 on success
 */

int main(__attribute__((unused)) int ac, char *av[])
{

	struct stat st;
	char *path_env = getenv("PATH");

	if (path_env == NULL)
	{
		fprintf(stderr, "Could not get PATH environment variable\n");
		return (1);
	}

	char *path = strtok(path_env, ":");

	while (path != NULL)
	{
		char file_path[strlen(path) + strlen(av[1]) + 2];

		sprintf(file_path, "%s/%s", path, av[1]);
		if (stat(file_path, &st) == 0)
		{
			printf("%s\n", file_path);
		}
		path = strtok(NULL, ":");
	}

	return (0);
}
