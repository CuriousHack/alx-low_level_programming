#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program to print
 * base16 with putchar
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	for (c = 'a'; c < 'g'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
