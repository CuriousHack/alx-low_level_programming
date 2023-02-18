#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program to print all numbers
 * within base ten
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i);
	putchar("\n");

	return (0);
}
