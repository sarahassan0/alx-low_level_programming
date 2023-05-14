/*
 * fork + wait + execve
 */
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/wait.h>

/**
 * main -  executes the command ls -l /tmp in 5 different child processes.
 * Each child should be created by the same process (the father).
 * Wait for a child to exit before creating a new child.
 * fork - returns 0 to child process & pid of the child to parent process.
 * waitpid - returns the pid of the child process, it's behavior here is
 *            the same as calling wait() because options = 0.
 * status - code used to indicate the exit status of the child process
 * execvp - searches for the executable file in the directories specified in
 *                the PATH environment variable.
 *
 * Return: Always 0.
 */

int main(void)
{
	pid_t pid;
	int i, status;

        for(i = 0; i < 5; i++)
        {
                pid = fork();
                if (pid == -1)
                {
                        perror("fork");
                        exit(1);
                }
                else if (pid == 0)
                {
                        char *args[] = {"ls", "-l", "/tmp", NULL};
                        if(execvp(args[0], args) == -1)
                        {
                                perror("execvp");
                                exit(1);   
                        }
                        exit(0);
                }
                else
                {
                        if(waitpid(pid, &status, 0) == -1)
                        {
                                perror("waitpid");
                                exit(1);   
                        }
                        printf("Child process with pid %d exited with status %d.\n", pid, status);
                        exit(0);
                        
	        }
        }
	return (0);
}
