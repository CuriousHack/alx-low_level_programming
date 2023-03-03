#include "main.h"

/**
 * _strcat - function to concatenate two strings
 * @dest: destination of the string
 * @src: string to add to destination
 * Return: return the dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j, m;

	for (i = 0; dest[i] <= '\0'; i++)
	{
		m = i;
	}
	while (j >= '\0')
	{
		dest[m] = src[j];
		m++;
		j++;
	}
	return (dest);
}
