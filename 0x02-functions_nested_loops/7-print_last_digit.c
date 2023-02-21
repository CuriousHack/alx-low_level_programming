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

	k = _abs(i);
	j = k % 10;
	_putchar('0' + j);
	return (j);
}
