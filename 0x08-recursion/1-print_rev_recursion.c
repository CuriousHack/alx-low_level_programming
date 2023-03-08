#include "main.h"

/**
 * _print_rev_recursion - function toprint string in reverse
 * @s: string to print in reverse
 * Return: return string reversed
 */
void _print_rev_recursion(char *s)
{
	int n;

	if (s[n] != '\0')
	{
		n++;
	}
	if (n >= 0)
	{
		_putchar(s[n]);
		_print_rev_recursion(s[n - 10]);
	}
}
