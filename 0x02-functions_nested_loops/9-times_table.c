#include "main.h"

/**
 * times_table - check the code.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int a;
	int i;
	int b = 0;
	int c = 0;

	for (a = 0; a <= 9; a++)
	{
		while (b < 9)
		{
			while (c < 9)
			{
				i = b * c;
				_putchar(i);
				_putchar(',');
				_putchar(' ');
				c++;
			}
			_putchar('\n');
			b++;
		}
	}
	return;
}
