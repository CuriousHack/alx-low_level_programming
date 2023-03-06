#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *i;
	char *j;

	while (*haystack != '\0')
	{
		j = haystack;
		i = needle;

		while (*haystack != '\0' && *i != '\0' && *haystack == *i)
		{
			haystack++;
			i++;
		}
		if (!*i)
			return (j);
		haystack = j + 1;
	}
	return (0);
}
