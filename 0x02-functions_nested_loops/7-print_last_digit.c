#include "main.h"

/**
 * print_last_digit - check the code.
 *@i: test parameter
 * Return: Always 0.
 */
int print_last_digit(int i)
{
	int k;

	if (i < 0)
		k = -(i % 10);
	else
		k = (i % 10);
	_putchar('0' + k);
	return (k);
}
