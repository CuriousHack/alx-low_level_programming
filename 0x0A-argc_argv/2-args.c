#include <stdio.h>

/**
 * mmain - print all arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0 Alwats true
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc, i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
