#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @src: fil to copy from
 * @dest: fil to copy to
 * @argv: arguments vector
 * Return: no return.
 */
void error_file(int src, int dest, char *argv[])
{
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for ALX students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int src, dest, err_close;
	ssize_t nchar, nwrite;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp src dest");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(src, dest, argv);

	nchar = 1024;
	while (nchar == 1024)
	{
		nchar = read(src, buf, 1024);
		if (nchar == -1)
			error_file(-1, 0, argv);
		nwrite = write(dest, buf, nchar);
		if (nwrite == -1)
			error_file(0, -1, argv);
	}

	err_close = close(src);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}

	err_close = close(dest);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}
	return (0);
}
