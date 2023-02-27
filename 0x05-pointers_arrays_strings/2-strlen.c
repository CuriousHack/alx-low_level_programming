#include "main.h"

/**
 * _strlen - function to return length of string
 * @s: the string tocount
 * Return: return string length
 *
 */
int _strlen(char *s)
{
	int i;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
