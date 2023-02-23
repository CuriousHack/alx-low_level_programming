#include "main.h"

/**
 * print_numbers - print from 0-9 and \n
 *
 * Return: 0 Always (Success)
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
	return (0);
}
