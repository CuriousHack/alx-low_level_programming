#include "main.h"

/**
 * _puts - function to print a string
 * @str: the string to print
 * Return: return nothing
 *
 */
void _puts(char *str)
{
	int i = 0;
	char j = *(str + i);

	while (j != '\0')
	{
		_putchar(j);
		i++;
	}
	_putchar('\n');
}
