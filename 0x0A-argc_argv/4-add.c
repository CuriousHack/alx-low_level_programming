#include <stdio.h>
#include <stdlib.h>

/**
 * main - addition of numbers
 * @argc: number of elements
 * @argv: element array
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int n = 0;

	if (argc == 1)
		printf("0\n");
	for (; i <= argc; i++)
	{
		if (argv[i] % 10 < 48 || argv[i] % 10 > 57)
			printf("Error\n");
			return (1);
		sum = sum + argv[i];
	}
	printf("%d\n", sum);
}
