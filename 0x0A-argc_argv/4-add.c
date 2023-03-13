#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - addition of numbers
 * @argc: number of elements
 * @argv: element array
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc == 1)
		printf("0\n");
	for (i = 0; i <= argc; i++)
	{
		if (!isdigit(arv[i]))
			printf("Error\n");
			return (1);
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
