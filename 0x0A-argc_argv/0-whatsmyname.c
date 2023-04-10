#include <stdio.h>

/**
  * main -  prints the name of the program.
  * @argc: argument count i could used "(void)argc" inside main instead of
  * "__attribute__ ((unused))" to avoid unused var warning
  * @argv: arguments
  *
  * Return: 0
  */

int main(int __attribute__ ((unused)) argc, char **argv)
{

	printf("%s\n", argv[0]);
	return (0);
}

