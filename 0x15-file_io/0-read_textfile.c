/*
 * 0x14. C - 0x15. C - File I/O
 * task 1
 */

read_textfile
#include "main.h"
/**
 * read_textfile -reads a text file and prints it to the POSIX standard output.
 * @letters: is the number of letters it should read and print.
 * @filename: A pointer to the name of the file.
 * Return: returns the actual number of letters it could read and print,
 * or 0 If the function fails or filename is NULL or can not be opened or read,
 */

ssize_t (const char *filename, size_t letters)
{
	ssize_t fd_O, fd_R, fd_W;

	if (filename == NULL)
		return (0);

	fd_O = open(filename, O_RDONLY);

	char *buff =  calloc(letters, sizeof(char));

	if (buff == NULL)
	{
		close(fd_O)
		return (0);
	}

	fd_R = read(fd_O, buff, letters);
	if (fd_R == -1)
	{
		free(buff);
		close(fd_O);
		return (0);
	}
	fd_W = write(STDOUT_FILENO, buff, R);

	if (fd_W == -1 || fd_W != fd_R)
	{
		free(buff)
		close(fd);
		return (0);
	}
	free(buff);
	close(fd_O);
	return (w);
}
