#include "main.h"

/**
 * _strlen_recursion - function toprint length of string
 * @s: string to count
 * Return: return the string lenght
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
