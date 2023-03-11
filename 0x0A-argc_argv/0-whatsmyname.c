#include <stdio.h>

/**
 * main - print file name
 * @argc: arg count
 * @argv: arg vector
 * Return: always 0
 */
int main(int argc __attribute__ ((unused)), int *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
