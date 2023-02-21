#include "main.h"

/**
 * _abs - check the code.
 * @i: param type
 * Return: Always 0.
 */
int _abs(int i)
{
	int j;

	if (i < 0)
	{
		j = i + i + i;
	}
	else
	{
		j = i;
	}
	return (j);
}
