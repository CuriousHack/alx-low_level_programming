#include "main.h"

/**
 * _pow_recursion - function toprint power of x
 * @x: number tofind its power
 * @y: number of power
 * Return: return value of result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(y - 1));
}
