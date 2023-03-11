#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculate product of two numbers
 * @argc: number of elements
 * @argv: elements array
 * Return: 0 Always
 */
imt main(int argc, int *argv[])
{
	if (argc != 3)
	{
		printf("%s\n", "Error")
		return (1);
	}
	else
		printf("%d\n" atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
