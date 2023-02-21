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
	char i;
	int ret;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		ret = 1;
		else
		ret = 0;
	}
return (ret);
}
