#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program to print
 * the alphabets using putchar function
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch >= 'z'; ch++)
		putchar(ch);
	return (0);

