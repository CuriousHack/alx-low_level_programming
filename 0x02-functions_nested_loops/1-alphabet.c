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
		char c;

		for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
		_putchar('\n');
	}
	print_alphabet();
	return (0);
}
