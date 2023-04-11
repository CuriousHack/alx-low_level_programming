#include "main.h"

/**
 * get_endianness - checks the endiannes
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int a;
	char *ch;

	a = 1;
	ch = (char *) &a;

	return ((int)*ch);
}
