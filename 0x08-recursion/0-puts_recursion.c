#include "main.h"

/**
 * _puts_recursion - function toprint string
 * @s: string toprint
 * Return: return string
 */
void _puts_recursion(char *s)
{
	int n = 0;
	char m;

	if (s[n] != '\0')
	{
		_putchar(s[n]);
		m = s[n + 1];
		_puts_recursion(m);
	}
	else
	{
		_putchar('\n');
	}
}
