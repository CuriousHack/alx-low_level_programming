#include "main.h"

/**
 * _strcpy - function to copy string
 * @dest: destination to copy to
 * @src: sourcé to copy from
 * Return: return dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i > 0)
	{
		*(dest + i) = *(src + i);
		if (src[i] == '\0')
			break;
		i++;
	}
	return (dest);
}
