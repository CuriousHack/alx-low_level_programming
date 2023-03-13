#include "main.h"

/**
 * _memcpy - function tocopy memory address
 * @dest: destination of the copied mem address
 * @src: source of memory address
 * @n: number of addresses tobe copied
 * Return: return the newly generated addresses.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
