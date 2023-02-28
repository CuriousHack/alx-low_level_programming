#include "main.h"

/**
 * puts2 - function to print every other character
 * @str: string tosplit
 * Return: no return
 */
void puts2(char *str)
{
	int count = 0, i;

	while (str[count] != '\0')
	{
		count++;
	}
	for (i = 0; i <= count - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
