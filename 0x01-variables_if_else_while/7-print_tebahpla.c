#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program to print
 * the alphabets in reverse
 * using putchar function
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}

