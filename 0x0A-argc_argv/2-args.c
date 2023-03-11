#include <stdio.h>

/**
 * mmain - print all arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0 Alwats true
 */
int main(int argc, char *argv[])
{
	int i = 1;

	while (i < argc - 1)
	{
		printf("%s\n", *(argv + i));
		i++;
	}
	return (0);
}
