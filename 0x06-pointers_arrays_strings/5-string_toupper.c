#include "main.h"

/**
 * string_toupper - function to convert lower to upper
 * @c: string to check
 * Return: return string
 */
char *string_toupper(char *c)
{
	int count = 0;

	while (c[count] != '\0')
	{
		if ((c[count] >= 97) && (c[count] <= 122))
		{
			c[count] = c[count] - 32;
		}
		count++;
	}
	return (c);
}
