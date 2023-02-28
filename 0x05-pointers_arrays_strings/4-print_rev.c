#include "main.h"

/**
 * print_rev - function to reverse a string
 * @s: string tobe reversed
 * Return: nothing toreturn
 */
void print_rev(char *s)
{
	int count = 1;

	while (s[count] != '\0')
	{
		count++;
	}
	for (; count > 0; count--)
	{
		_putchar(s[count]);
	}
}
