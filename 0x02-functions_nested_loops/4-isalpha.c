#include "main.h"

/**
 * _isalpha - check the code.
 * @c: first parameter
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	int i = 0;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		i = 1;
	return (i);
}
