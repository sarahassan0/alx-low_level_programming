/*
 * 0x14. C - 0x15. C - File I/O
 * task 2
 */

#include "main.h"
/**
 * append_text_to_file -  appends text at the end of a file.
 * @text_content: is a NULL terminated string to write to the file.
 * @filename: A pointer to the name of the file.
 * Return: 1 on success, -1 on failure (filename is NULL return -1, file
 *         can't be created,file can not be written, write “fails”, etc…)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd_O, fd_W, len = 0;

	if (filename == NULL)
		return (-1);

	fd_O = open(filename, O_WRONLY | O_APPEND);

	if (fd_O == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
		while (text_content[len])
			len++;

	fd_W = write(fd_O, text_content, len);

	if (fd_W == -1 || fd_W != len)
	{
		close(fd_O);
		return (-1);
	}
	close(fd_O);
	return (1);
}
