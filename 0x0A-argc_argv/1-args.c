#include <stdio.h>

/**
 * main -  prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: arguments, i could used "(void)argv" inside main instead of
 * "__attribute__ ((unused))" to avoid unused var warning
 *
 * Return: 0
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{

	printf("%d\n", argc - 1);
	return (0);
}

