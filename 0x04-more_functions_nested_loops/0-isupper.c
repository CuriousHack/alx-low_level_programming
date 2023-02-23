#include "main.h"
/**
 * _isupper - Check for uppercase
 * @c: Character to be checked
 *
 * Return: 1 if the char is upper. 0 otherwise
 */
int _isupper(int c)
{
	int i, ret;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			ret = 1;
		}
		else
		{
			ret = 0;
		}
	}
	return (ret);
}
