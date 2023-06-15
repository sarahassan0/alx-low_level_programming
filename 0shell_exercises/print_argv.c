/*
 * Arguments
 * task 0. av
 */

#include <stdio.h>

/**
 * main - program that prints all the arguments, without using ac.
 * @ac: number of arguments passed
 * @av: array of pointers to the arguments
 *
 * Return: 0 on success
 */

int main(int ac, char **av)
{
	int i = 0;

	while (av[i])
	{
		printf("%s ", av[i]);
		i++;
	}
	printf("\n");
	return (0);
}
