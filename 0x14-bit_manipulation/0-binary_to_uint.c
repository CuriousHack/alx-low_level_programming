#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary nunmber
 *
 * Return: unsigned integer.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int integ;
	int length, base_2;

	if (!b)
		return (0);

	integ = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, base_2 = 1; length >= 0; length--, base_2 *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		if (b[length] & 1)
			integ += base_2;
	}

	return (integ);
}
