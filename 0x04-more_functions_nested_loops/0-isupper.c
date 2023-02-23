#include "main.h"
/**
 * _isupper - Check for uppercase
 * @c: Character to be checked
 *
 * Return: 1 if the char is upper. 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
