#include "main.h"
#include <stdlib.h>

/**
 * create_array - function tocreate array of specific char
 * @size: size of the array
 * @c: character to use
 * Return: return NULL if failed, pointer toarray if success
 */
char *create_array(unsigned int size, char c)
{
	int i;

	char *arr = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
