#include "main.h"
/**
 * print_alphabet_x10 - toprint  alphabet
 * in lower case 10x
 *
 **/
void print_alphabet_x10(void)
{
	char ch;
	char i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
