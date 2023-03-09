#include "main.h"

/**
 * is_prime - function tocheck if its prime
 * @n: number tocheck for
 * @m: numer tocheck with
 * Return: return 0 or 1
 */
int is_prime(unsigned int n, unsigned int m)
{
	if (n % m == 0)
		if (n == m)
			return (1);
	return (is_prime(n, m + 1));
}
/**
 * is_prime_number - function tocheck for prime number
 * @n: number to check for
 * Return: return 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
