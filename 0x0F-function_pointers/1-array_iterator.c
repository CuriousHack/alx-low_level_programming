#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function to iterate an array
 * @array: array to iterate
 * @size: size of the array to iterate
 * @action: action to perform on the given array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
