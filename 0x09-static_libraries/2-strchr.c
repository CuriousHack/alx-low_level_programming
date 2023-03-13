#include "main.h"

/**
 * _strchr - function tolocate a char in string
 * @s: string tocheck
 * @c: character tocheck for
 * Return: return the string value of the char
 */
char *_strchr(char *s, char c)
{
	unsigned int counter = 0;

	for (; *(s + counter) != '\0'; counter++)
		if (*(s + counter) == c)
			return (s + counter);
	if (*(s + counter) == c)
		return (s + counter);
	return ('\0');
}
