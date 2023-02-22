#include "main.h"

/**
 * print_times_table - check the code.
 * @n: integer variable
 * Return: Always 0.
 */
void print_times_table(int n)
{
	if (!(n < 0) || (n > 15))
	{

	int a;
	int b = 0;
	int c = 0;

	for (a = 0; a <= n; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	for (b = 1; b <= n; b++)
	{
		c = (a * b);
	if ((c / 10) > 0)
	{
		_putchar((c / 10) + '0');
	}
	else
	{
		_putchar(' ');
	}
		_putchar((c % 10) + '0');
		if (b < n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	}
	}
}
