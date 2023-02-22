#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check the code.
 * @n: test variable
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
