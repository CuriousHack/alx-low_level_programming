#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program to print
 * the alphabets without eand q 
 * using putchar function
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}

