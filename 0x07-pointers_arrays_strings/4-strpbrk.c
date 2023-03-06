#include "main.h"

/**
 * _strpbrk - function to search for a string for any byte
 * @s:string to check from
 * @accept: string to check
 * Return: pointer to the byte of s
 */
char _strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + i))
				return (s + i);
		}
	}
	return ('\0');
}
