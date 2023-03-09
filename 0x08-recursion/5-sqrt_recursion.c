#include "main.h"

/**
 * operation - function tocalculate sqrt
 * @n: number to check for its sqrt
 * @m: number to check with
 * Return: return value of m
 */
int operation(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	else if (m * m > n)
	{
		return (-1);
	}
	else
	{
		return (operation(n, m + 1));
	}
}

/**
 * _sqrt_recursion - function toprint sqrt of a number
 * @n: number to find its sqrt
 * Return: return sqrtof n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (operation(n, 1));
}
