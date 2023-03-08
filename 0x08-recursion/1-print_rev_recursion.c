#include "main.h"

/**
 * _print_rev_recursion - function toprint string in reverse
 * @s: string to print in reverse
 * Return: return string reversed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
