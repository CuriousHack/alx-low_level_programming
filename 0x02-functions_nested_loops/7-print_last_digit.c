#include "main.h"

/**
 * print_last_digit - check the code.
 *@i: test parameter
 * Return: Always 0.
 */
int print_last_digit(int i)
{
	int j;
	int k;

	if (i < 0)
		k = -(i);
	k = i;
	j = k % 10;
	_putchar('0' + j);
	return (j);
}
