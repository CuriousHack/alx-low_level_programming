#include "main.h"

/**
 * _strlen_recursion - function toprint length of string
 * @s: string to count
 * Return: return the string lenght
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}
