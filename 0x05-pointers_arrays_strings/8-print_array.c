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

	for (; count < n; count++)
	{
		printf("%d", a[count]);
		if (count != (n - 1))
			printf(", ");
	}
	printf("\n");
}
