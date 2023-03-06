#include "main.h"

/**
 * _strchr - function tolocate a char in string
 * @s: string tocheck
 * @c: character tocheck for
 * Return: return the string value of the char
 */
char *_strchr(char *s, char c)
{
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	{
		if (s[counter] == c)
		{
			i = s[counter];
		}
		else
		{
			i = NULL;
		}
		counter++;
	}
	return (i);
}
