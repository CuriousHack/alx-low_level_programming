#include "main.h"

/**
 * _strlen_recursion - function toprint length of string
 * @s: string to count
 * Return: return the string lenght
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comp_recursion - comparer the strings
 * @n: smallest iterator
 * @m: biggest iterator
 * @s: string
 * Return: 0 or 1
 */
int comp_recursion(char *s, int n, int m)
{
	if (*(s + n) == *(s + m))
	{
		if (n == m || n == m + 1)
		{
			return (1);
		}
		return (comp_recursion(s, n + 1, m - 1));
	}
	return (0);
}

/**
 * is_palindrome - check for palindrome
 * @s: string
 * Return: 0 or 1;
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp_recursion(s, 0, _strlen_recursion(s - 1)));
}
