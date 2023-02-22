#include <stdio.h>

/**
 * main - print fibonacci
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	long int i, a = 1, b = 2, sum = 0, esum = 0;

	for (i = 0; i < 50; i++)
	{
		if ((b % 2 == 0) && (b < 40000))
			esum = esum + b;
		sum = a + b;
		a = b;
		b = sum;
	}
	printf("%d\n", esum);
	return (0);
}
