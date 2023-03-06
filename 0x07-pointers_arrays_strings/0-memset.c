#include "main.h"

/**
 * _memset - function to replace n buffer
 * @s: the array to replace
 * @b: what to replace in the array
 * @n: the number of array toreplace
 * Return: return the new output
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
		return (s);
	}
}
