/*
 * 0x14. C - 0x15. C - File I/O
 * task 3
 */

#include "main.h"


void check_ac(int ac);
void close_fun(int fd);

/**
 * main - opies the content of a file to another file.
 * @ac: number of arguments passed
 * @av: array of pointers to the arguments
 *
 * Return: 0 on success
 */

int main(int ac, char *av[])
{
	int fd_from_O, fd_to_O, len_R, len_W;
	char buff[1024];

	check_ac(ac);

	fd_from_O = open(av[1], O_RDONLY);

	len_R = read(fd_from_O, buff, 1024);

	if (fd_from_O == -1 || len_R == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
		close(fd_from_O);
		exit(98);
	}

	fd_to_O = open(av[2], O_WRONLY | O_TRUNC);
	
	if (fd_to_O == -1)
			fd_to_O = open(av[2], O_WRONLY | O_CREAT, 0664);

	 len_W = write(fd_to_O, buff, len_R);
	if (fd_to_O == -1 || len_W == -1 || len_W != len_R)
	{
		dprintf(STDERR_FILENO, "Error: Can't  write to %s\n", av[2]);
		close(fd_to_O);
		exit(99);
	}


	close_fun(fd_from_O);
	close_fun(fd_to_O);
	return (1);
}

/**
 * check_ac - checks the count of argc = 3.
 * @ac: argc count.
 *
 */
void check_ac(int ac)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}


/**
 * close_fun - checks that file descriptors were closed properly.
 * @fd: spcified descriptors.
 *
 */
void close_fun(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
