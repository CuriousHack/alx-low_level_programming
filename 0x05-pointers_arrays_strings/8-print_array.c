#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print array
 * @a: array values
 * @n: number of array index
 * Return: no return
 */
void print_array(int *a, int n)
{
	int count = 0;

	for (count = 0; count <= n - 1; count++)
	{
		printf('%d, ', a[count]);
	}
	_putchar('\n');
}
