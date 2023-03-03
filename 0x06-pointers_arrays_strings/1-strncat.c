#include "main.h"

/**
 * _strncat - function to concatenate two strings
 * @dest: destination of the string
 * @src: string to add to destination
 * @n: number of character tobe copied
 * Return: return the dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j <= n)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
