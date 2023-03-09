#include "main.h"

/**
 * factorial - funtion toprint fact. of n
 * @n: variable totest
 * Return: fact of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
