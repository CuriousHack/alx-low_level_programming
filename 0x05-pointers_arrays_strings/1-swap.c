#include "main.h"

/**
 * swap_int - function toswap two numbers
 * @a: first swap integer
 * @b: second swap integer
 * Return: no return
 *
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
