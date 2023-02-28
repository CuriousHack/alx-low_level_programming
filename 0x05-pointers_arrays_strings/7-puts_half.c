#include "main.h"

/**
 * puts_half - function to print half of a string
 * @str: string to split into two
 * Return: no return
 */
void puts_half(char *str)
{
	int counter = 0, i, j;

	while (str[counter] != '\0')
	{
		counter++;
	}
	if (counter % 2 == 1)
	{
		j = (counter - 1) / 2;
	}
	else
	{
		j = counter / 2;
	}
	for (i = j; i <= (counter - 1); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
