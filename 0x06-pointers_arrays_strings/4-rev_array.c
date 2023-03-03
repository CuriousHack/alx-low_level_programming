#include "main.h"

/**
 * reverse_array - function to print an array in reverse
 * @a: the array to reverse
 * @n: the array index
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	while (a[n])
	{
		if (n != 0)
			_putchar(", ");
		_putchar(a[n]);
		n--;
	}
	_putchar("\n");
}
