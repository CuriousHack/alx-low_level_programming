#include "main.h"

/**
 * puts_half - function to print half of a string
 * @str: string to split into two
 * Return: no return
 */
void puts_half(char *str)
{
	int counter = 0, i;

	while (str[counter] != '\0')
	{
		counter++;
	}
	for (i = counter / 2; i != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
