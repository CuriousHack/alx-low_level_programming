#include "main.h"

/**
 * _strncpy - function to copy two strings
 * @dest: destination of the string
 * @src: string to add to destination
 * @n: number of character tobe copied
 * Return: return the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
