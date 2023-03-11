#include <stdio.h>

/**
 * main - print number of arguments
 * @args: number of args
 * @argv: args vector
 * Return: return 0 Alaways
 */
int main(int args, char *argv[])
{
	int i = 0;

	while (argv[i] != '\0')
	{
		i++;
	}
	printf("%d\n", i);
	return (0);
}
