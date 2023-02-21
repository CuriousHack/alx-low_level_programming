#include "main.h"
/**
 * _islower - function to
 * check if a char is a
 * lowercase
 *
 * @c: test variable
 * Return: return 1 if true
 **/

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		return (1);
		else
		return (0);
	}
}
