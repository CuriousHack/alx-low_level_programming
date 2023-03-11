#include <stdio.h>

/**
 * main - print number of arguments
 * @argc: number of args
 * @argv: args vector
 * Return: return 0 Alaways
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
