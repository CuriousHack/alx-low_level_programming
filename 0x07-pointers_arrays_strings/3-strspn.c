#include "main.h"

/**
 * _strspn - function to check for string in another string
 * @s: STRING to check from
 * @accept: string to check for
 * Return: number of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				break;
		}
		if (!*(accept + j)
				return (i);
	}
	return (i);
}
