/*
 * wait exercise
 */
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

/**
 * main - fork & wait example, manpuliting pid & ppid.
 * fork - returns 0 to child process & pid of the child to parent process.
 * wait - returns the pid of the child process.
 * sleep - suspend the process for n number od seconds.
 * status - code used to indicate the exit status of the child process
 * Return: Always 0.
 */

int main(void)
{
	pid_t pid, child_pid, my_pid, ppid;
	int status;

	child_pid = fork();
	my_pid = getpid();
	if (child_pid == -1)
	{
		perror("fork");
		exit(1);
	}
	else if (child_pid == 0)
	{
		ppid = getppid();
		printf("Child process running with pid %d its parent pid is %d\n",
				my_pid, ppid);
		sleep(5);
		exit(0);
	}
	else
	{
		my_pid = getpid();
		printf("Parent process with pid %d waiting for child with pid %d\n",
				my_pid, child_pid);
		pid = wait(&status);
		if (pid == -1)
		{
			perror("wait");
			exit(1);
		}
		else
		{
			printf("Child process with pid %d has terminated with status %d\n",
					pid, status);
		}
	}

	return (0);
}
