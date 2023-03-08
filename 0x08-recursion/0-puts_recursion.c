#include "main.h"

/**
 * _puts_recursion - function toprint string
 * @s: string toprint
 * Return: return string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
