#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{

	int x;

	if (argc >= 3)
	{
		x = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", x);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

}
