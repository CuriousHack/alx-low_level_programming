#include "main.h"

/**
 * _strcmp - function to compare two string
 * @s1: firstteststring
 * @s2: second test string
 * Return: either
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	while (i >= 0)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		else
		{
			return (0);
		}
		i++;
	}
}
