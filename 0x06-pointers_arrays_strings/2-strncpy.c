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
	int i, j;

	i = 0;
	j = 0;

	while (i >= 0)
	{
		while (j < n)
		{
		dest[i] = src[j];
			if (src[j] == '\0')
				break;
			j++;
		}
		i++;
	}
	return (dest);
}
