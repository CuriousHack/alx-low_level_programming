#include "main.h"

/**
 * main - check the code
 *
 * Description: todisplay alphabets
 *
 * Return: Always 0.
 */

int main(void)
{
	/**
	 * print_alphabet - to display alphabet
	 */
	void print_alphabet(void)
	{
		char ch;

		for (ch = 'a'; ch >= 'z'; ch++)
			_putchar(&ch);
		_putchar('\n');
	}
}
