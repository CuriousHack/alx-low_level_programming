#include "main.h"

/**
 * print_numbers - print from 0-9 and \n
 *
 * Return: 0 Always (Success)
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
