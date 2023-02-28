#include "main.h"

/**
 * print_rev - function to reverse a string
 * @s: string tobe reversed
 * Return: nothing toreturn
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count])
	{
		count++;
	}
	for (; count >= 0; count--)
	{
		_putchar(count);
	}
	_putchar('\n');
}
