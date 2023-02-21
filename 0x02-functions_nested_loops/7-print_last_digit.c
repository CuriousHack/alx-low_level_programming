#include "main.h"

/**
 * print_last_digit - check the code.
 *@i: test parameter
 * Return: Always 0.
 */
int print_last_digit(int i)
{
	int j;

	j = i % 10;
	_putchar(j);
	return (j);
}
