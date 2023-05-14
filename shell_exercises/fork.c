#include <stdio.h>
#include <unistd.h>

/**
 * main - fork  returns 0 to child p, pid of child p to the parent process
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid;
	pid_t child_pid;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	my_pid = getpid();
	printf("My pid is %u\n", my_pid);
	if (child_pid == 0)
	{
		printf("child process %u\n", my_pid);
	}
	else
	{
		printf("parent process %u : Hi %u !, I am your father\n", my_pid, child_pid);
	}
	return (0);
}
